#include "ParkingLot.h"
#include "Car.h"
#include <algorithm>
#include <iostream>

void ParkingLot::addCar(std::unique_ptr<Car> car) {
    cars.push_back(std::move(car));
}

void ParkingLot::removeCar(const std::string& registrationNumber) {
    auto it = std::remove_if(cars.begin(), cars.end(),
        [&registrationNumber](const std::unique_ptr<Car>& car) {
            return car->getRegistrationNumber() == registrationNumber;
        });
    cars.erase(it, cars.end());
}

Car* ParkingLot::findCar(const std::string& registrationNumber) {
    for (const auto& car : cars) {
        if (car->getRegistrationNumber() == registrationNumber) {
            return car.get();
        }
    }
    return nullptr; // Если не найдено
}

void ParkingLot::printAllCars() const {
    for (const auto& car : cars) {
        std::cout << "Registration Number: " << car->getRegistrationNumber()
                  << ", Model: " << car->getModel()
                  << ", Color: " << car->getColor() << std::endl;
    }
}

std::vector<Car*> ParkingLot::findCarsByModel(const std::string& model) const {
    std::vector<Car*> result;
    for (const auto& car : cars) {
        if (car->getModel() == model) {
            result.push_back(car.get());
        }
    }
    return result;
}
