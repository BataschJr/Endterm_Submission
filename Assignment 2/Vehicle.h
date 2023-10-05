#ifndef VEHICLE_H
#define VEHICLE_H

// define vehicle class
class Vehicle
{
public:
    // constructor
    Vehicle();
    // destructor
    virtual ~Vehicle();
    void acceleration();
    void brake();
    void gearShift(int gear);
    double getSpeed() const;

private:
    int gear;
    double speed;
};

#endif