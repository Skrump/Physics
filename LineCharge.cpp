//Line Charge Class- Source File
#include "LineCharge.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>

using namespace std;

LineCharge::LineCharge()    //default constructor
{
	Length = 0;
	Charge = 0;
	Dist = 0;
	height = 0;
}

LineCharge::~LineCharge()   //destructor
{}

void LineCharge::changeHeight() 
{
    double temp;
    cin >> temp;
    height = temp;
}

void LineCharge::changeCharge()
{
    double temp;
    cin >> temp;
    Charge = temp;
}

void LineCharge::changeDist()
{
    double temp;
    cin >> temp;
    Dist = temp;
}

void LineCharge::changeLength()
{
    double temp;
    cin >> temp;
    Length = temp;
}

void LineCharge::runLC()    //runs the class object for the user to follow
{
	cout << "You are now in the Line of Charge calculator.\n"
		<< "We will be determining the magnitude of the \n"
		<< "electric field of a line of charge at a point\n"
		<< "that is distance (D) away. An electric\n"
		<< "charge (Q) is distributed uniformly along the line\n"
		<< "which has length 2a. Length (a) is measured from\n"
		<< "the center of the line to either extreme.\n"
		<< "Please enter the charge Q of the line of charge:\n"
		<< "(in the form of 1e-9 C(\"1 times 10 ^ -9\")\n";
	changeCharge();
	
	cout << "\nNow enter the length (a) of the line of charge\n"
	    << "(note: total length of the line is 2a, the calculator\n"
	    << "requires half of that value):\n";
	    changeLength();
	    
    cout << "\nNow enter the distance (D) in meters:\n";
    changeDist();
    
    cout << "\nLastly we will need the height relative to the\n"
        << "center of the line of charge (in other words give\n"
        << "the distance from the center of the rod where the \n"
        << "point P would be orthogonal to the line):\n";
    changeHeight();
    
	cout << "\n\n****************************************\n"
    	<< "The magnitude of the Electric Field of\n"
    	<< "a line of charge at a point P which is (R)\n"
    	<< "distance away has: \n";
    findE(Length, Charge, Dist, height);
    cout << "****************************************\n\n";
}

void LineCharge::findE(double L, double Q, double D, double h) 
{
    double k = 8987551787;
    double lambda = (Q/(2*L));
    double x2 = 2 * L;
    
    double val1 = ((k * lambda) * ((1 / ( sqrt(x2 * x2) + (D * D))) - (1 / D))); //x component
    double val2 = (((k * lambda) / D) * (x2 / (sqrt((x2 * x2) + (D * D)))));    //y component
    
    cout << "magnitude of Ex = " << val1 << "N/C \n"
        << "magnitude of Ey = " << val2 << "N/C \n";
}
