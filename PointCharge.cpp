#include "PointCharge.h"
#include <iostream>
#include <math.h>

using namespace std;

PointCharge::PointCharge()  //default constructor
{
	Radius = 0;
	Charge = 0;
}

PointCharge::PointCharge(double R, double Q)    //constructor
{
	Radius = R;
	Charge = Q;
}

double PointCharge::findE(double R, double Q) //function that returns the E field of a single charge
{
    double k = 8987551787;
	return ((k * Q) / (R*R));  //((K*Q)/R^2)
}

void PointCharge::runPointCharge()	//explains the calculator's function and recieves input from user then outputs the correct result
{
	double tempR, tempQ;
	cout << "You are now in the Point Charge calculator.\n"
		<< "We will be determining the magnitude of the\n"
		<< "electric field of a point charge with charge (Q)\n"
		<< "at a point P which is distance (R) away\n\n."
		<< "Please enter the charge (Q) of the point charge\n"
		<< "in the form 1.0e-10 (\"1 times 10 ^ -10\")couloumbs:\n";
	changeQ();

	cout << "Please enter the distance (R) from the charged\n"
		<< "particle to point P in meters:\n";
	changeR();
	
	cout << "\n\n****************************************\n"
		<< "The magnitude of the Electric Field of\n"
		<< "a charged particle at a point P which is \n(R) distance"
		<< "away is: " << findE(Radius, Charge) << " N/C\n"
		<< "****************************************\n\n";
}

void PointCharge::changeQ()	//recieves the value of the charge Q held by the charged particle
{
	double temp;
	cin >> temp;
	Charge = temp;
}

void PointCharge::changeR()	//recieves the value of the distance R from the charged particle to the point P
{
	double temp;
	cin >> temp;
	Radius = temp;
}
