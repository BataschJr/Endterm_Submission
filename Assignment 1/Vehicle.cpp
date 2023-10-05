#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() : speed(0), gear(0) {}
Vehicle::~Vehicle() {}

void Vehicle::acceleration()
{
    char input;
    std::cout << "Do you want to accelerate? Y/N" << std::endl;
    std::cin >> input;
    try
    {
        if (input == 'Y' || input == 'y')
        {
            speed += 10;
        }
        else
        {
            speed = speed;
        }
    }
    catch (std::string input)
    {
        throw "Please enter a valid input";
    }
}

void Vehicle::brake()
{
    char input;
    std::cout << "Do you want to apply brakes? Y/N" << std::endl;
    std::cin >> input;
    try
    {
        if (input == 'Y' || input == 'y' && speed >= 10)
        {
            speed -= 10;
        }
        else
        {
            speed = speed;
        }
    }
    catch (double speed)
    {
        throw "Vehicle already at rest.";
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
