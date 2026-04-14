#include "bike.hpp"
#include <iostream>

Bike::Bike(const std::string &brand)
    : brand(brand), speed(0) {}

void Bike::start() const
{
    std::cout << "Bike " << brand << " starting\n";
}

void Bike::accelerate(double amount)
{
    speed += amount;
}

void Bike::brake(double amount)
{
    speed -= amount;
    if (speed < 0)
        speed = 0;
}

void Bike::displayInfo() const
{
    std::cout << "Bike: " << brand
              << " Speed: " << speed << "\n";
}

void Bike::kickStart() const
{
    std::cout << "Bike kick-started\n";
}