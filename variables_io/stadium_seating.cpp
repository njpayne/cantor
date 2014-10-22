/* There are three seating categories at a stadium. For a softball game, Class A seats cost $15 Class B cost $12, and Class C seats cost $9.
Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income generated from ticket sales.
Format your dollar amount in a fixed-point notation with two decimal points and make sure that the decimal is always displayed*/ 

# include <iostream>
using namespace std;

int main() // Initiate the main function
{
	// Declare all the relevant variables
	double class_a, class_b, class_c, cost_class_a, cost_class_b, cost_class_c, total_cost;
	
	// Fill in ticket pricing (in future this could be a lookup from a database or other table)
	cost_class_a = 15; cost_class_b = 12; cost_class_c = 9;
	
	// Get user input re their ticket selections
	cout << "Welcome to the ticket selection program!\n";
	cout << "There are currently three types of tickets that you can purchase!\n";
	cout << "Class A tickets cost $15, class B tickets cose $12, and class C tickets cost $9!\n";
	cout << "Please confirm the total number of tickets that you would like to purchase?\n";
	
	cout << "How many class A tickets would you like to purchase?";
	cin >> class_a;
	cout << "How many class B tickets would you like to purchase?";
	cin >> class_b;
	cout << "How many class C tickets would you like to purchase?";	
	cin >> class_c;
		
	// Calculate the total cost of the transaction
	total_cost = (class_a * cost_class_a) + (class_b * cost_class_b) + (class_c * cost_class_c);
		
	// Return the output to the user
	cout.precision(4); // Note that I Have used cout.precision to set precision & fix to toggle fixed-point mode
	cout << "Based on the values that you input, the total cost of your transaction is $" <<  total_cost << " dollars!";
	return 0;		
}
