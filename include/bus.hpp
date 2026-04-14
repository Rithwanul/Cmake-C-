#ifndef BUS_HPP
#define BUS_HPP

#include <string>

#include "four_wheeler.hpp"

class Bus : public FourWheeler
{
private:
    std::string brand;
    std::string model;
    std::string company;
    int year;
    double speed;

public:
    Bus();
    Bus(const std::string &brand, const std::string &model, const std::string &company, int year, double speed);

    void start() const override;
    void accelerate(double amount) override;
    void brake(double amount) override;
    void displayInfo() const override;
    void openTrunk() const override;
};

#endif // BUS_HPP
