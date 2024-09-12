#include "ParkingLot.h"
#include "Car.h"

int main() {
    ParkingLot parkingLot;

    // Создаем уникальный указатель на Car
    std::string regNum = "ABC123";
    std::string model = "ModelX";
    std::string color = "Red";

    parkingLot.addCar(std::make_unique<Car>(regNum, model, color)); // Исправлено создание уникального указателя

    // Предположим, что эти методы существуют в ParkingLot
    // ParkingLot не имеет таких методов, необходимо их реализовать или удалить эти вызовы
    // Car* car = parkingLot.findCar(regNum);
    // parkingLot.printAllCars();
    // std::vector<Car*> cars = parkingLot.findCarsByModel(model);

    return 0;
}
