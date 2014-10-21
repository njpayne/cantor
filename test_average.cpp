/* Write a program that asks for five test scores. The program should calculate the average test score and display it.
The number displayed sbould be formatted in fixed-point notation, with one decimal point of precision.*/

#include <iostream> // Include the iostream library
using namespace std;

int main()
{
	// Note that this program could be written using a loop to grab the number of test scores that are specified
	// I will show that in the next chapters work for the class
	// We could also create an object called a test score, and instantiate those each time the object is passed in
	
	// Declare the relevant variables
	double test1, test2, test3, test4, test5, average_score, count;
	count = 5; // Note that count will be hard coded on this run through as 5. 
	// In future, count will change as the number of entries changes
	
	// Get the intput from the user
	cout << "Welcome to the test score calculation program!\n";
	cout << "This progrma takes the test scores from 5 users and calculates a simple average\n";
	
	// Note how tedious it is to hard code the number of tests to be counted
	cout << "Please enter the test score of the first user:";
	cin >> test1;
	
	cout << "Please enter the test score of the second user:";
	cin >> test2;
	
	cout << "Please enter the test score of the third user:";
	cin >> test3;
	
	cout << "Please enter the test score of the fourth user:";
	cin >> test4;
	
	cout << "Please enter the test score of the fifth user:";
	cin >> test5;
	
	// Calculate the average test score
	average_score = (test1 + test2 + test3 + test4 + test5) / count;
	
	// Return the output to the user
	cout << "Thank you for using our test average calculator!\n";
	cout << "You entered a total of 5 test scores, and the average of those scores is: " << average_score << "!";		
	return 0;
}
