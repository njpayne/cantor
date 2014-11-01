/* An online book club awards points to its customers based on the number of books purchased each month.
Points are awarded as follows: Books Purchase 0, 1, 2, 3, 4 or more; Points Earned 0, 5, 15, 30, 60
Write a program that asks the user to enter the number of books purchased this month and then displays
The number of points awarded */

# include <iostream>
using namespace std;

int main()
{
	// Instantiate the variables
	int books_purchased;
	
	// Set the initial values
	cout << "Welcome to the book purchasing program!\n";
	cout << "Once you tell me how many books you have purchased, I will be able to tell you the number of points you have earned!\n";
	cout << "Please tell me how many books you purchased this month!\n";
	cout << "The categories are 0, 1, 2, 3, 4, or more!";
	cin >> books_purchased; // Input the total number of books
		
	// Evaluate the answer provided in a switch statement
	switch(books_purchased) // Switch around the input provided for the number of books
	{
		case 0:
			cout << "We are sorry to hear that you didn't purchase any books last month!\n";
			cout << "As a result, you didn't get any points!\n";
			cout << "Don't you like to read?";
			break;
			
		case 1:
			cout << "Good work, you purchased 1 book last month!\n";
			cout << "As a result, you got 5 points!\n";
			cout << "Why don't you try reading a little bit more!";
			break;
		
		case 2:
			cout << "Good work, you purchased 2 books last month!\n";
			cout << "As a result, you got 15 points!\n";
			cout << "Why don't you try reading a little bit more!";
			break;
			
		case 3:
			cout << "Good work, you purchased 3 book last month!\n";
			cout << "As a result, you got 30 points!\n";
			cout << "Keep reading! It is a great thing to do!";
			break;
			
		default:
			// Purchased 4 or more!; Note that I did not do any error checking on the entry
			cout << "Congratulations! You purchased 4 or more books last month!\n";
			cout << "As a result, you received 60 points!\n";
			cout << "You are a true reading rockstar!";			
	}
	return 0;
}
