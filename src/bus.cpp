#include "bus.hpp"

#include <iostream>

Bus::Bus() : brand("unknown"), model("unknown"), company("unknown"), year(0), speed(0.0) {}
Bus::Bus(const std::string &brand, const std::string &model, const std::string &company, int year, double speed)
    : brand(brand), model(model), company(company), year(year), speed(speed) {}

void Bus::start() const
{
    std::cout << "Bus of " << company << " starting\n";
}

void Bus::accelerate(double amount)
{
    speed += amount;
}

void Bus::brake(double amount)
{
    speed -= amount;
    if (speed < 0)
        speed = 0;
}

void Bus::displayInfo() const
{
    std::cout << "Bus Company: " << company << "\nBrand: " << brand << "\nModel: " << model << "\nYear: " << year
              << " Speed: " << speed << "\n";
}

void Bus::openTrunk() const
{
    std::cout << "Bus luggage compartment opened\n";
}
