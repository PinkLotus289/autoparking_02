#include <iostream>
#include <memory>
#include "ParkingLot.hpp"

using namespace std;

void displayMenu() {
    cout << "Меню:" << endl;
    cout << "1. Отобразить информацию о парковке (обычный пользователь)" << endl;
    cout << "2. Отобразить информацию о парковке (администратор)" << endl;
    cout << "3. Удалить машину" << endl;
    cout << "4. Удалить парковочное место" << endl;
    cout << "5. Выход" << endl;
    cout << "Введите ваш выбор: ";
}

int main() {
    setlocale(LC_ALL, "Russian");

    auto parkingLot = make_unique<ParkingLot>("Центральная парковка");

    auto car1 = make_unique<Car>("Toyota", "А123ВС77");
    auto car2 = make_unique<Car>("Tesla", "Х456УУ99", true);
    parkingLot->addCar(move(car1));
    parkingLot->addCar(move(car2));

    auto spot1 = make_unique<ParkingSpot>(101, "Компактное", true);
    auto spot2 = make_unique<ParkingSpot>(202, "Большое", false);
    parkingLot->addParkingSpot(move(spot1));
    parkingLot->addParkingSpot(move(spot2));

    int choice;
    bool running = true;

    while (running) {
        displayMenu();
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                cout << "\nИнформация для обычного пользователя:" << endl;
                parkingLot->displayParkingLot(false);
                break;
            case 2:
                cout << "\nИнформация для администратора:" << endl;
                parkingLot->displayParkingLot(true);
                break;
            case 3: {
                cout << "\nВведите номерной знак машины для удаления: ";
                string licensePlate;
                getline(cin, licensePlate);
                parkingLot->removeCar(licensePlate);
                break;
            }
            case 4: {
                cout << "\nВведите номер парковочного места для удаления: ";
                int spotNumber;
                cin >> spotNumber;
                parkingLot->removeParkingSpot(spotNumber);
                break;
            }
            case 5:
                running = false;
                break;
            default:
                cout << "Неверный выбор, попробуйте снова." << endl;
                break;
        }
        cout << endl;
    }

    cout << "Завершение программы..." << endl;
    return 0;
}
