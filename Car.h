#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string registrationNumber;
    std::string model;
    std::string color;
public:
    Car();
    Car(const std::string& regNum, const std::string& mdl, const std::string& clr);
    
    // Getters
    std::string getRegistrationNumber() const;
    std::string getModel() const;
    std::string getColor() const;

    // Setters
    void setRegistrationNumber(const std::string& regNum);
    void setModel(const std::string& mdl);
    void setColor(const std::string& clr);
};

#endif // CAR_H
