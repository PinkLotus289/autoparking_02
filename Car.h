#ifndef CAR_H
#define CAR_H

#include <string>
#include <string_view>

class Car {
private:
    std::string registrationNumber;
    std::string model;
    std::string color;
public:
    // Конструктор по умолчанию
    Car() = default;

    // Конструктор с параметрами
    Car(std::string_view regNum, std::string_view mdl, std::string_view clr);

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
    void setRegistrationNumber(std::string_view regNum);
    void setModel(std::string_view mdl);
    void setColor(std::string_view clr);
};

#endif // CAR_H
