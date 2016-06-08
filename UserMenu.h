//Main Menu Class-Header File
#pragma once

#include "RoC.h"
#include "PointCharge.h"
#include "LineCharge.h"
#include <iostream>
#include <string>

using namespace std;

class UserMenu
{
	PointCharge Menu1;  //instantiates a Point Charge object
	RingOfCharge Menu2; //instantiates a Ring of Charge object
	LineCharge Menu3;   //instantiates a Line Charge object

public:
	UserMenu();    //default constructor
	void RunMenu();    //runs the user's menu

};
