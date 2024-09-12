#include "ParkingLot.h"
#include <algorithm>
#include <iostream>

ParkingLot::~ParkingLot() {
    // Освобождаем память
    for (Car* car : cars) {
        delete car;
    }
}

void ParkingLot::addCar(Car* car) {
    cars.push_back(car);
}

void ParkingLot::removeCar(const std::string& registrationNumber) {
    auto it = std::remove_if(cars.begin(), cars.end(),
        [&registrationNumber](Car* car) {
            if (car->getRegistrationNumber() == registrationNumber) {
                delete car;  // Освобождаем память перед удалением
                return true;
            }
            return false;
        });
    cars.erase(it, cars.end());
}

Car* ParkingLot::findCar(const std::string& registrationNumber) const {
    for (Car* car : cars) {
        if (car->getRegistrationNumber() == registrationNumber) {
            return car;
        }
    }
    return nullptr;
}

void ParkingLot::printAllCars() const {
    for (const Car* car : cars) {
        std::cout << "Registration Number: " << car->getRegistrationNumber() 
                  << ", Model: " << car->getModel() 
                  << ", Color: " << car->getColor() << std::endl;
    }
}

std::vector<Car*> ParkingLot::findCarsByModel(const std::string& model) const {
    std::vector<Car*> result;
    for (Car* car : cars) {
        if (car->getModel() == model) {
            result.push_back(car);
        }
    }
    return result;
}
