/* Write a program that calculates a car's gas mileage. The program should ask the user to enter the number of gallons of gas the car can
hold and the number of miles it can be driven on a full tank. It should then calculate and display the number of miles
per gallon that the car gets */

# include <iostream> // Call invoke the iostream libreary
using namespace std; // Include namespace (something not included in older C++ versions)

int main() // Create the main program
{
	// Declare the relevant variables for the problem
	float gallons, miles, miles_per_gallon;
	
	// Get the required inputs for the problem
	cout << "Welcome to the miles per gallon calculation program! \n";
	cout << "This program calculates the average miles per gallon that a basic car can get. \n";
	cout << "Please enter the number of gallons that the fuel tank can hold, as well as the miles that it can be driven on a full tank. \n";
	cout << "Number of gallons: \n";
	cin >> gallons;
	
	cout << "Miles that it can be driven: \n";
	cin >> miles;
	
	// Calculate the relevant outputs for the problem
	miles_per_gallon = miles / gallons;
	
	// Return the outputs to the user
	cout.precision(4); // Note that I Have used cout.precision to set precision & fix to toggle fixed-point mode
	// Need to make the precision variable depending on the output of the operation
	
	cout << "Based on your entry, this vehicle gets a total of " << miles_per_gallon << " miles per gallon!";
	return 0; // Return 0 to exit the program
	// Could put this into a loop later to ask the user to enter multiple values for different cars, or 
	// feed the input through a list.
}
