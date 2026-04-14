#ifndef CAR_HPP
#define CAR_HPP

#include <string>

#include "four_wheeler.hpp"

class Car : public FourWheeler
{
private:
    std::string brand;
    std::string model;
    int year;
    double speed;

public:
    Car();
    Car(const std::string &brand, const std::string &model, int year);
    Car(const std::string &brand, const std::string &model, int year, double speed);

    void start() const override;
    void accelerate(double amount) override;
    void brake(double amount) override;
    void displayInfo() const override;
    void openTrunk() const override;

    std::string getBrand() const;
    std::string getModel() const;
    double getSpeed() const;
    int getYear() const;
};

#endif // CAR_HPP
