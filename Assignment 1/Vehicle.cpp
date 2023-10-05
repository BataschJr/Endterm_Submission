#include <iostream>
#include "Vehicle.h"

Vehicle::Vehicle() : speed(0), gear(0) {}
Vehicle::~Vehicle() {}

int Vehicle::gearShift(int newGear)
{
    std::cout << "Please put the gear to accelerate?" << std::endl;
    std::cin >> newGear;
    gear = newGear;
    return gear;
}

void Vehicle::acceleration()
{
    gear = gearShift(gear);
    try
    {
        if (gear == 1)
        {
            speed += 10;
        }
        else if (gear == 2)
        {
            speed += 20;
        }
        else if (gear == 3)
        {
            speed += 30;
        }
        else
        {
            std::cout << "Third gear is the maximum gear." << std::endl;
        }
    }
    catch (std::string input)
    {
        throw "Please enter a valid input";
    }
}

void Vehicle::brake()
{
    if (gear <= 3)
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
}

double Vehicle::getSpeed() const
{
    return speed;
}
