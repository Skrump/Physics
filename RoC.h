//Ring of Charge Class- Header File
#pragma once

#include <math.h>

class RingOfCharge
{
    double Radius;    //radius of the ring
    double Charge;    //charge (Q) of the ring
    double Dist;    //distance of P from any perpendicular point on the ring
    double height;    //point P's height relative to the ring's center (0 being the ring's center)
    void changeHeight(); //change the height of the point

public:
    RingOfCharge();    //default constructor
//    RingOfCharge(double R, double Q, double D);    //unused constructor
    ~RingOfCharge();    //destructor
    bool adjustHeight();    //asks the user if they want to adjust the height(details in function)
    void runRoC();    //runs the class object for the user to follow

};
