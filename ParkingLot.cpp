#include "ParkingLot.h"
#include "Car.h"
#include <algorithm>

void ParkingLot::addCar(std::unique_ptr<Car> car) {
    cars.push_back(std::move(car));
}

void ParkingLot::removeCar(const std::string& registrationNumber) {
    auto it = std::remove_if(cars.begin(), cars.end(),
        [&registrationNumber](const std::unique_ptr<Car>& car) {
            return car->getRegistrationNumber() == registrationNumber;
        });

    // Удаление элементов из вектора, которые были помечены для удаления
    cars.erase(it, cars.end());
}
