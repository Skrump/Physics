//Main Menu Class-Source File
#pragma once
#include "UserMenu.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

UserMenu::UserMenu() {} //default constructor

void UserMenu::RunMenu()    //the user's portal to each calculator
{
	string entry;
	do {
		bool valid = false;
		cout << "\nYou are now in the Main Menu.\n"
			<< "Please choose the topic that you would like to try.\n"
			<< "Type the number corresponding to the topic and press enter.\n"
			<< "1.) Electric Field of a Point Charge.\n"
			<< "2.) Electric Field of a Line of Charge.\n"
			<< "3.) Exit.\n";
		/*<< "3.) NYI.\n"
		<< "4.) NYI.\n"; 
			<< "4.) Exit.\n";*/

		cin >> entry;
		cout << endl;

		if (entry == "1")
		{
			valid = true;
		}
		else if (entry == "2")
		{
			valid = true;
		}
		else if (entry == "3")
		{
			valid = true;
		}

		while (!valid)    //loop to ensure the user enters a valid entry
		{
			cout << "Error: Invalid entry. You entered " << entry << " which is\n"
				<< "not a valid entry. Please enter the number corresponding to\n"
				<< "the topic that you would like to test out.\n";

			cin >> entry;

			if (entry == "1")
			{
				valid = true;
			}
			else if (entry == "2")
			{
				valid = true;
			}
			else if (entry == "3")
			{
				valid = true;
			}
			else if (entry == "4")
			{
				valid = false;
			}

		}

		if (entry == "1")   //runs Point Charge subprogram
		{
			Menu1.runPointCharge();
		}
		else if (entry == "2")  //runs Line of Charge subprogram
		{
			Menu3.runLC();
		}
		else if (entry == "3")  //ends the program
		{
			exit;
		}
		else if (entry == "4")
		{
			//cout << "Not yet implemented.\n";
		}
	} while (entry != "3");
}
