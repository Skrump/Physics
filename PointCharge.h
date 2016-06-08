#pragma once

class PointCharge
{
	double Radius;
	double Charge;
	void changeQ();
	void changeR();

public:
	PointCharge();  //default constructor
	PointCharge(double R, double Q); //constructor
	double findE(double R, double Q); //returns E field
	void runPointCharge();  //runs the class object that the user will be utilizing
};
