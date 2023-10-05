#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
public:
    Vehicle();
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