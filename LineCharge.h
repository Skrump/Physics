//Line of Charge Class- Header File
#pragma once

#include <math.h>

class LineCharge
{
	double Length;    //length of the line
	double Charge;    //charge (Q) of the line
	double Dist;    //distance of P from any perpendicular point on the line
	double height;    //point P's height relative to the line's center (0 being the line's center)
	void changeLength();    //user gives the length of the line
	void changeCharge();    //user inputs the charge Q
	void changeDist();  //user changes the distance that the E field is being calculated
	void changeHeight();    //change the height of the point

public:
	LineCharge();    //default constructor
	~LineCharge();    //destructor
	void runLC();    //runs the class object for the user to follow
    void findE(double L, double Q, double D, double h); //calculates the E field with the given values
};
