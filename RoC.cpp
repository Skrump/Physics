//Ring of Charge Class- Source File
#include "RoC.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

RingOfCharge::RingOfCharge() //default constructor
{
    Radius = 0;
    Charge = 0;
    Dist = 0;
    height = 0;
}

/*RingOfCharge::RingOfCharge(double R, double Q, double D)    //unused constructor
{
    Radius = R;
    Charge = Q;
    Dist = D;
    height = 0;
} */

RingOfCharge::~RingOfCharge() //destructor
{}

void RingOfCharge::changeHeight()    //if the user decides to change the height they will be directed here
{
    double h = 0;
    cout << "Please enter a height:\n";

    cin >> h;

    /*while (h<-Radius || h>Radius)    //the height cannot exceed the radius in this program, so the user will be directed to enter
    {                                //a valid response
        cout << "Error, you entered" << h << " which is not a valid entry.\n"
            << "Your radius is " << Radius << ". Please enter a height that\n"
            << "is smaller than the absolute value of the radius.\n";

        cin >> h;
        cout << endl;
    }*/
}

bool RingOfCharge::adjustHeight()    //gives the user information on adjusting the height of point P
{                                    //so that they can choose whether or not the point is centered on the ring
    string entry; //user's entry
    bool valid = false;
//    cout << string(50, '\n');    //clear screen, work in progress
    cout << "\nAdjusting the \"height\" would move the point from the center of the ring of charge to\n"
        << "a point H above or below the center (center being 0). Would you like to adjust the height?\n"
        << "Please type in \"Yes\" to adjust height or \"No\" to leave the point at the given\n"
        << "distance from the center the center.\n";

    cin >> entry;
    cout << endl;

    if (entry == "Yes" || entry =="yes") //these two statements ensure that the user entered a valid response
    {
        valid = true;
    }
    if (entry == "No" || entry == "no")
    {
        valid = true;
    }

    /*while (!valid) //catches invalid responses and loops until they enter a valid response
    {
        cout << entry << " is not a valid response. Please enter a valid response.\n"
             << "Please type in \"Yes\" to adjust height or \"No\" to leave the point at the given\n"
             << "distance from the center the center.\n";
        cin >> entry;

        if (entry == "Yes" || entry == "yes")
        {
            valid = true;
        }

        if (entry == "No" || entry == "no")
        {
            valid = true;
        }
    }*/

    if (entry == "Yes" || entry == "yes")    //if the user wants to change the height, they are directed to changeHeight()
    {
        changeHeight();
        return true;
    }

    else                                    //if the user opts out of changing the height, it remains at the center of the ring
        return false;
}

void RingOfCharge::runRoC()
{
    double R = 0, Q = 0, D = 0; //radius, charge, distance (respectively)
    cout << "\nYou are now in the Ring of Charge calculator.\n"
        << "We will be finding the electric field of a ring of charge at a point P.\n"
        << "First we'll need the radius of the Ring, please enter a radius(in meters).\n";

    cin >> R;

    while (R <= 0)                //ensures that the user enters a valid ring radius
    {
        if (R == 0)
        {
            cout << "\nError: You cannot enter a radius of 0. Please enter a valid radius:\n";
        }
        else if (R > 0)
        {
            cout << "\nError: You cannot have a negative radius. Please enter a valid radius:\n";
        }

        cin >> R;
    }

    cout << "\nNext we will need the charge (Q) of the ring. Please enter a charge.\n";    //charge of the ring
    cin >> Q;

    cout << "\nFinally we will need a distance |D| of the point from the ring(in meters).\n";
    cin >> D;

    D = abs(D);    //takes the absolute value of the distance D

    adjustHeight();    //runs the adjustHeight function
}
