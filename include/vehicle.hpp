#ifndef VEHICLE_HPP
#define VEHICLE_HPP

class Vehicle
{
public:
    virtual ~Vehicle() = default;
    virtual void start() const = 0;
    virtual void accelerate(double amount) = 0;
    virtual void brake(double amount) = 0;
    virtual void displayInfo() const = 0;
};

#endif // VEHICLE_HPP
