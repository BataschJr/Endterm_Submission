#include <iostream>

#include "Car.h"

int main()
{
    try
    {
        Car *car = new Car();

        std::cout << "Car started moving. Speed: " << car->getSpeed() << " km/h" << std::endl;

        car->acceleration();
        std::cout << "Accelerating. Speed: " << car->getSpeed() << " km/h" << std::endl;

        car->brake();
        std::cout << "Applying brakes. Speed: " << car->getSpeed() << " km/h" << std::endl;

        delete car;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}