#include "ParkingLot.h"
#include "Car.h"

int main() {
    ParkingLot parkingLot;

    // Создаем уникальный указатель на Car
    std::string regNum = "ABC123";
    std::string model = "ModelX";
    std::string color = "Red";

    parkingLot.addCar(std::make_unique<Car>(regNum, model, color)); // Исправлено создание уникального указателя

    return 0;
}
