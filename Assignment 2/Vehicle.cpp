#include <iostream>
#include "Vehicle.h"

// initializing constructor with zero speed and gear.
Vehicle::Vehicle() : speed(0), gear(0) {}
Vehicle::~Vehicle() {}

// function for acceleration of car
void Vehicle::acceleration()
{
    speed += 10;
}

// function for deceleration of car

void Vehicle::brake()
{
    if (speed >= 10)
    {
        speed -= 10;
    }
}

// function for gears
void Vehicle::gearShift(int newGear)
{
    gear = newGear;
}

// getting const speed
double Vehicle::getSpeed() const
{
    return speed;
}
