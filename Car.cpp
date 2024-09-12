#include "Car.h"

Car::Car(const std::string& regNum, const std::string& mdl, const std::string& clr)
    : registrationNumber(regNum), model(mdl), color(clr) {}

std::string Car::getRegistrationNumber() const {
    return registrationNumber;
}

std::string Car::getModel() const {
    return model;
}

std::string Car::getColor() const {
    return color;
}

void Car::setRegistrationNumber(const std::string& regNum) {
    registrationNumber = regNum;
}

void Car::setModel(const std::string& mdl) {
    model = mdl;
}

void Car::setColor(const std::string& clr) {
    color = clr;
}
