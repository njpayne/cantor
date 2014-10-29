// The area of a rectangle is its length times its width. Write a program that asks for the length and the width of the two rectangles
// The program should then tell the user which rectangle has the greater area, or if the areas are the same?

# include <iostream>
using namespace std;

int main()
{ // Create the main function
	
	// Instantiate the variables
	double len1, len2, wid1, wid2, area1, area2;
	
	cout << "Welcome to the area comparison calculator!\n";
	cout << "To use this calculator, enter the length and the width of the two different rectangles that you wish to compare!\n";
	
	// Get the length and width of the rectangles
	cout << "Please enter the length of the first rectangle";
	cin >> len1;
	cout << "Please enter the width of the first rectangle";
	cin >> wid1;
	cout << "Please enter the length of the second rectangle";
	cin >> len2;
	cout << "Please enter the width of the second rectangle";
	cin >> wid2;
	
	// Calcualte the area
	area1 = len1 * wid1;
	area2 = len2 * wid2;
	
	// Do the if comparison of the areas
	if(area1 > area2)
	{
		cout << "Based on your inputs, rectangle 1 has a larger area than rectangle 2!\n";
		cout << "In fact, the area of rectangle 1 is " << area1 << " and the area of rectangle 2 is " << area2;
	}
	else if(area1 < area2)
	{
		cout << "Based on your inputs, rectangle 2 has a larger area than rectangle 1!\n";
		cout << "In fact, the area of rectangle 2 is " << area2 << " and the area of rectangle 2 is " << area1;
	}
	else // The two areas are equal
	{
		cout << "Based on your inputs, both of the rectangles have the same area!";
	}

}
