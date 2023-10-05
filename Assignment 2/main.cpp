// main.cpp
#include <iostream>
#include "Car.h"

int main()
{
    const int numCars = 3; // Number of cars in the race

    // creating a pointer to the array
    Car *cars[numCars];

    try
    {
        for (int i = 0; i < numCars; ++i)
        {
            // creating new object for each car
            cars[i] = new Car();
        }

        std::cout << "Race begins!" << std::endl;

        for (int lap = 1; lap <= 5; lap++)
        { // Simulating 5 laps
            std::cout << "Lap " << lap << ":" << std::endl;
            for (int i = 0; i < numCars; i++)
            {
                cars[i]->acceleration();
                std::cout << "Car " << i + 1 << ": Speed " << cars[i]->getSpeed() << " km/h" << std::endl;
            }
        }

        for (int i = 0; i < numCars; i++)
        {
            delete cars[i];
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
