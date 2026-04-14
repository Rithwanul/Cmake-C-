#ifndef BIKE_HPP
#define BIKE_HPP

#include <string>
#include "two_wheeler.hpp"

class Bike : public TwoWheeler
{
private:
    std::string brand;
    double speed;

public:
    Bike(const std::string &brand);

    void start() const override;
    void accelerate(double amount) override;
    void brake(double amount) override;
    void displayInfo() const override;
    void kickStart() const override;
};

#endif // BIKE_HPP
