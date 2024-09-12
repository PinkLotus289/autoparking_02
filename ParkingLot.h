#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <string>
#include "Car.h"

class ParkingLot {
private:
    std::vector<Car*> cars;  // Используем указатели для динамического выделения памяти
public:
    ~ParkingLot();

    // CRUD-методы
    void addCar(Car* car);
    void removeCar(const std::string& registrationNumber);
    Car* findCar(const std::string& registrationNumber) const;
    void printAllCars() const;

    // Дополнительный метод: Поиск машин по модели
    std::vector<Car*> findCarsByModel(const std::string& model) const;
};

#endif // PARKINGLOT_H
