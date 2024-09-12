#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string registrationNumber;
    std::string model;
    std::string color;
public:
    // Конструктор по умолчанию
    Car() = default;

    // Конструктор с параметрами
    Car(const std::string& regNum, const std::string& mdl, const std::string& clr);

    // Деструктор по умолчанию
    ~Car() = default;

    // Копирующий конструктор и оператор присваивания
    Car(const Car&) = default;
    Car& operator=(const Car&) = default;

    // Методы доступа
    std::string getRegistrationNumber() const;
    std::string getModel() const;
    std::string getColor() const;

    // Методы установки
    void setRegistrationNumber(const std::string& regNum);
    void setModel(const std::string& mdl);
    void setColor(const std::string& clr);
};

#endif // CAR_H
