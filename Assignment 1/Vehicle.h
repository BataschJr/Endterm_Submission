#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
    // constructor
    Vehicle();

    // Destructor
    virtual ~Vehicle();

    // function to accelerate the vehicle
    void acceleration();

    //function to decelerate the vehicle
    void brake();

    //function for gear and the speed is dependent on the number of gears
    int gearShift(int gear);

    //return a constant speed
    double getSpeed() const;

private:
    int gear;
    double speed;
};

#endif