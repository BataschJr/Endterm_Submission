#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// Inheriting the vehicle class
class Car : public Vehicle
{
public:
    // constructor
    Car();

    // destructor
    virtual ~Car();
};

#endif