/*
Alejandro Lopez's Extra Credit Skeleton
For MVC Physics 4B w/ Dr. Bhattacharya
Forward any questions to Alejandro@ iamfes007@gmail.com*/


/*******************************************************
NOTE: In order to avoid conflict or confusion, please
list any changes made to the program in the ChangeLog
********************************************************/


#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "UserMenu.h"
#include "RoC.h"
#include "LineCharge.h"

using namespace std;

int main()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" //will make this prettier
		<< "Welcome to an extra credit project created for Dr. Bhattacharya.\n"
		<< "This project was brought you by Alejandro Lopez.\n"; //include your names!

	UserMenu User;
	User.RunMenu(); //runs the program!

	return 0; //totally necessary
}
