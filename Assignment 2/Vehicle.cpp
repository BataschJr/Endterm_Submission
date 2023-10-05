#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() : speed(0), gear(0) {}
Vehicle::~Vehicle() {}

void Vehicle::acceleration()
{
    speed += 10;
}

void Vehicle::brake()
{
    if (speed >= 10)
    {
        speed -= 10;
    }
}

void Vehicle::gearShift(int newGear)
{
    gear = newGear;
}

double Vehicle::getSpeed() const
{
    return speed;
}
