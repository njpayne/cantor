/* Many financial experts advise property owners to insure their homes or buildinds for at least 80 percent of the amount that it would cost to replace
their structure. Write a program that asks the user to enter the replacement cost of the building and then displays the minimum amount of insurance
that should be purchased for the property */

#include <iostream>
using namespace std;

int main()
{
	double replacement_cost, min_insurance; // Declare the needed variables
	
	// Instantiate the program
	cout << "Welcome to the insurance calculation program!\n";
	cout << "This program takes the replacement cost of your building, and then determines the minimum\n";
	cout << "amount of insurance that you should purchase for the property!\n";
	
	// Gather the inputs from the users
	cout << " What is the total replacement cost of the building that you own?";
	cin >> replacement_cost; // Get the replacement cost
	
	// Calculate the replacement costs
	min_insurance = replacement_cost * 0.8;
	
	// Return the output to the user
	cout << "Your building has a replacement cost of " << replacement_cost;
	cout << "We recommend that you get at least " << min_insurance << " dollars in insurance for your property!";
	return 0;
}
