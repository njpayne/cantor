/* Create a program that displays the following menu:
Geometry calculator: 1. Calculate the area of a circle; 2. Calculate the area of a rectangle
3. Calculate the area of a triangle; 4. Quit; Enter your choices (1-4):
Then, for the relative entry, be sure to calculate the correspondening corrected value and display the output
Be sure to deal with inappropriate entries */

# include <iostream>
using namespace std;

int main()
{
	// Instantiate the program variables
	int shape; // This will get the shape that the user will enter!
	double radius, length, width, base, height, area;
	
	// Get the users input
	cout << "Welcome to the geometry calculator program!\n";
	cout << "Please enter the type of shape that you would like to calculate the area for!\n";
	cout << "The options are 1 = Circle, 2 = Rectangle, 3 = Triangle, 4 = Quit!\n";
	cout<< "\nEnter your selection: ";
	cin >> shape;
	
	// Work through the multiple selections
	switch(shape)
	{
		case 1: // Area of a circle	
			cout << "\nEnter the radius of the circle: ";		
			cin >> radius;
			break;
		
		case 1: // Area of a rectangle
			cout << "\nEnter the length of the rectangle: ";	
			cin >> length;
			cout << "\nEnter the width of the rectangle: ";	
			cin >> width;
			break;
			
		case 1: // Area of a triangle
			cout << "\nEnter the base of the triangle: ";	
			cin >> base;
			cout << "\nEnter the height of the triangle: ";	
			cin >> height;
			break;
		
		case 1: // Quit
			break;
			
		default:
			// If the user enters a value that is not in the original set
	}
}
