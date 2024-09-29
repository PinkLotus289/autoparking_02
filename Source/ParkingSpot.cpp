#include "../Header/ParkingSpot.hpp"
#include <iostream>

ParkingSpot::ParkingSpot(int num, std::string_view sz, bool isOccupied)
    : number(num), size(sz), occupied(isOccupied) {}

int ParkingSpot::getNumber() const {
    return number;
}

void ParkingSpot::displayParkingSpot(bool isAdmin) const {
    std::cout << "Место №" << number << ", Размер: " << size
              << (occupied ? " (Занято)" : " (Свободно)") << std::endl;
    if (isAdmin) {
        std::cout << "Дополнительная информация для администратора: "
                  << "Занятость: " << (occupied ? "Да" : "Нет") << std::endl;
    }
}
