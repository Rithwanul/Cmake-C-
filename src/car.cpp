#include "car.hpp"

#include <iostream>

Car::Car() : brand("unknown"), model("unknown"), year(0), speed(0.0) {}

Car::Car(const std::string &brand, const std::string &model, int year)
    : brand(brand), model(model), year(year), speed(0.0) {}

Car::Car(const std::string &brand, const std::string &model, int year, double speed)
    : brand(brand), model(model), year(year), speed(speed) {}

void Car::start() const
{
    std::cout << brand << " " << model << " is starting." << std::endl;
}

void Car::accelerate(double amount)
{
    if (amount > 0)
    {
        speed += amount;
    }
}

void Car::brake(double amount)
{
    if (amount > 0)
    {
        speed -= amount;
        if (speed < 0)
        {
            speed = 0;
        }
    }
}

void Car::displayInfo() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Speed: " << speed << std::endl;
}

void Car::openTrunk() const
{
    std::cout << "Opening the trunk of " << brand << " " << model << "." << std::endl;
}

std::string Car::getBrand() const { return brand; }

std::string Car::getModel() const { return model; }

double Car::getSpeed() const { return speed; }

int Car::getYear() const { return year; }
