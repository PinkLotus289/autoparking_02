#include "Car.h"

Car::Car(std::string_view regNum, std::string_view mdl, std::string_view clr)
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

void Car::setRegistrationNumber(std::string_view regNum) {
    registrationNumber = regNum;
}

void Car::setModel(std::string_view mdl) {
    model = mdl;
}

void Car::setColor(std::string_view clr) {
    color = clr;
}
