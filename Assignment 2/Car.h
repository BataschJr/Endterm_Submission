#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// Car class inheriting the vehicle class
class Car : public Vehicle
{
public:
    // constructor
    Car();

    // destructor
    virtual ~Car();
};

#endif