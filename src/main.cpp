#include "bus.hpp"
#include "bike.hpp"
#include "car.hpp"

int main()
{
    Vehicle *v1 = new Car("Toyota", "Corolla", 2020, 60);
    Vehicle *v2 = new Bus("GreenLine", "CityBus", "GreenLine Transport", 2018, 40);
    Vehicle *v3 = new Bike("Yamaha");

    v1->start();
    v2->start();
    v3->start();

    v1->displayInfo();
    v2->displayInfo();
    v3->displayInfo();

    delete v1;
    delete v2;
    delete v3;

    return 0;
}
