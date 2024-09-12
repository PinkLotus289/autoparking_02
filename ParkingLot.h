#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include <memory>
#include <string>

class Car;

class ParkingLot {
private:
    std::vector<std::unique_ptr<Car>> cars;
public:
    void addCar(std::unique_ptr<Car> car);
    void removeCar(const std::string& registrationNumber);
    
    // Добавляем отсутствующие методы
    Car* findCar(const std::string& registrationNumber);
    void printAllCars() const;
    std::vector<Car*> findCarsByModel(const std::string& model) const;
};

#endif // PARKINGLOT_H

