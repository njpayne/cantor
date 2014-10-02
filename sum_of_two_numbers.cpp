// Write a program that stores the integers 62 and 99 in variables and stores the sum of these two in a variable called total

#include <iostream>
using namespace std; // Set the initial namespace

int main() // Create the main function
{
	int a, b, total; // Create two initial integers
	
	a = 62; // First integer
	b = 99; // Second integer
	
	total = a + b; // Sum up the total
	cout << "The sum of variable a and b is equal to " << total; // Assign total to the cout variable
	return 0;			
}
