#include "Car.hpp"
#include <iostream>

Car::Car(std::string_view b, std::string_view lp, bool isReserved)
    : brand(b), licensePlate(lp), reserved(isReserved) {}

std::string_view Car::getLicensePlate() const {
    return licensePlate;
}

void Car::displayCar() const {
    std::cout << "Марка: " << brand << ", Номерной знак: " << licensePlate
              << (reserved ? " (Зарезервировано)" : "") << std::endl;
}
