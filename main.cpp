#include <iostream>
#include <string>
#include "Car.h"
#include "ParkingLot.h"

int main() {
    ParkingLot parkingLot;
    int choice;
    
    while (true) {
        std::cout << "1. Add Car\n2. Remove Car\n3. Find Car\n4. Print All Cars\n5. Find Cars by Model\n6. Exit\n";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 6) break;

        if (choice == 1) {
            std::string regNum, model, color;
            std::cout << "Enter Registration Number: ";
            std::getline(std::cin, regNum);
            std::cout << "Enter Model: ";
            std::getline(std::cin, model);
            std::cout << "Enter Color: ";
            std::getline(std::cin, color);
            parkingLot.addCar(new Car(regNum, model, color));
        } else if (choice == 2) {
            std::string regNum;
            std::cout << "Enter Registration Number to Remove: ";
            std::getline(std::cin, regNum);
            parkingLot.removeCar(regNum);
        } else if (choice == 3) {
            std::string regNum;
            std::cout << "Enter Registration Number to Find: ";
            std::getline(std::cin, regNum);
            Car* car = parkingLot.findCar(regNum);
            if (car) {
                std::cout << "Car found - Model: " << car->getModel() << ", Color: " << car->getColor() << std::endl;
            } else {
                std::cout << "Car not found." << std::endl;
            }
        } else if (choice == 4) {
            parkingLot.printAllCars();
        } else if (choice == 5) {
            std::string model;
            std::cout << "Enter Model to Find Cars: ";
            std::getline(std::cin, model);
            std::vector<Car*> cars = parkingLot.findCarsByModel(model);
            if (cars.empty()) {
                std::cout << "No cars found for this model." << std::endl;
            } else {
                for (Car* car : cars) {
                    std::cout << "Registration Number: " << car->getRegistrationNumber()
                              << ", Color: " << car->getColor() << std::endl;
                }
            }
        }
    }

    return 0;
}
