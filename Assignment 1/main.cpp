#include <iostream>

#include "Car.h"

int main()
{
    try
    {
        // creating a pointer to the newly created object.
        Car *car = new Car();

        std::cout << "Car started moving. Speed: " << car->getSpeed() << " km/h" << std::endl;

        // shows speed after acceleration
        car->acceleration();
        std::cout << "Accelerating. Speed: " << car->getSpeed() << " km/h" << std::endl;

        // shows speed after the brakes are applied
        car->brake();
        std::cout << "Applying brakes. Speed: " << car->getSpeed() << " km/h" << std::endl;

        // deleting the object to free up the memory
        delete car;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}