// Write a program that takes in an array of numbers and returns the maximum and minimum of the numbers in the group
// To simplify things, I will make it fixed ... so that you can only enter 5 values

# include <iostream>
using namespace std;

int main(){
	// Create the initial counter & other variables (hard coded on first implementation)
	int maximum, minimum, num1, num2, num3, num4, num5;
	
	// Create an empty array to hold the data
	// Note that an array must be declared before it is used. A typical declaration for an array in C++ is
	int a[5]; // Create an array of numbers with 5 values inside the array; This array is called foo
	
	// Input the array of numbers (count the number of inputs)
	// This includes appending the array as the numbers are added
	cout << "Welcome to the max / min number program\n!"; 
	cout << "Please enter the numbers that are in your 5 number series!\n";
	// Note that one needs to error check the input
	
	// Could do a lop in future to make this cleaner
	cout << "Please enter the first number in the series!\n";
	cin >> num1; a[0] = num1;

	cout << "Please enter the second number in the series!\n";
	cin >> num2; a[1] = num2;
	
	cout << "Please enter the third number in the series!\n";
	cin >> num3; a[2] = num3;
	
	cout << "Please enter the fourth number in the series!\n";
	cin >> num4; a[3] = num4;
	
	cout << "Please enter the fith number in the series!\n";
	cin >> num5; a[4] = num5;
	
	// Do a comparison between all numbers to find the minimum and the maximum
	maximum = a[1]; 
	minimum = a[1]; // Set the maximum and minimum to the first numbers in position
	for(int i = 1; i < 5; i++) // Loop through all the numbers in the array
	{
		if(maximum > a[i])
		{
			minimum = a[i];
		}
		else if(maximum < a[i])
		{
			maximum = a[i];
		}
	}
	
	// Return the value of the number to the user
	cout << "Thank you for using the min, max number program!\n";
	cout << "The minimum of the array that you entered is " << minimum << "\nand the maximum of the number you entered is " << maximum;	
	return 0;	
}
