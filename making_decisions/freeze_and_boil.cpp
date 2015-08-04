#The following table lists the freezing and boiling points of several substances. Write a program that asks the
# user to enter a temperature, and then shows all the substances that will freeze at that temperature and all
# that will boil at that temperature. For example, if the user enters -20, the program should report that water will
# freeze at that temperature and oxygen will boil at that temperature.
# Ethyl alcohol: -173 Freezing; 172 boiling; Mercury: -38 freezing; 676 boiling; Oxygen: -362 freezing; -306 boiling
# Water: 32 Freezing; 212 boiling

#include <iostream>
using namespace std;

int main()
{
	// Declare all relevant variables
	double temperature;
	
	// Ask the user for input
	cout << "Welcome to the temperature range information tool!\n";
	cout << "This tool will tell you, depending on the temperature entered in F, \nthe substances that will boil or freeze at tha temperature!";
	cout << "Please enter the temperature that you are currently thinking about!";
	
	cin >> temperature;
	
	// Evaluate the input and return the output to the user
	if(temperature <= -362)
	{
		// Oxygen freezes
	}
	else if(temperature > -362 && temperature <= -306) ){
		// Oxygen boils		
	}
	else if(temperature > -306 && temperature <= -173) ){
		// Ethyl alcohol freezes	
	}
	else if(temperature > -173 && temperature <= -38) ){
		// Mercury freezes		
	}
	else if(temperature > -38 && temperature <= 32) ){
		// Water freezes		
	}
	else if(temperature > 32 && temperature <= 212) ){
		// Oxygen boils		
	}
}
