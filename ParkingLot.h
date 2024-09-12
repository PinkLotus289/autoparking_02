#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <memory>
#include <string>

class Car;

class ParkingLot {
private:
    std::vector<std::unique_ptr<Car>> cars; // Используем умные указатели
public:
    // Методы
    void addCar(std::unique_ptr<Car> car);
    void removeCar(const std::string& registrationNumber);
    // Другие методы
};

#endif // PARKINGLOT_H

