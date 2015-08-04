/* Create a program that displays the following menu:
Geometry calculator: 1. Calculate the area of a circle; 2. Calculate the area of a rectangle
3. Calculate the area of a triangle; 4. Quit; Enter your choices (1-4):
Then, for the relative entry, be sure to calculate the correspondening corrected value and display the output
Be sure to deal with inappropriate entries */

# include <iostream>
//# include <boost/math/constants/constants.hpp> // Boost library for mathematical constants
# include <cmath> // C math library
using namespace std;
//using namespace boost{ namespace math{ namespace constants{
//
//template <class T> T pi();
//template <class T> T root_pi();
//template <class T> T root_half_pi();
//template <class T> T root_two_pi();
//template <class T> T root_ln_four();
//template <class T> T e();
//template <class T> T half();
//template <class T> T euler();
//template <class T> T root_two();
//template <class T> T ln_two();
//template <class T> T ln_ln_two();
//template <class T> T third();
//template <class T> T twothirds();
//template <class T> T pi_minus_three();
//template <class T> T four_minus_pi();
//
//}}} // namespaces for boost

int main()
{
	// Instantiate the program variables
	int shape; // This will get the shape that the user will enter!
	double radius, length, width, base, height, area;
	const double pi = 3.1415;
	//const double pi = boost::math::constants::pi<double>(); // For using pi
	
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
			area = pi * pow(radius, 2);
			cout << "The area of your circle is " << area;
			break;
		
		case 2: // Area of a rectangle
			cout << "\nEnter the length of the rectangle: ";	
			cin >> length;
			cout << "\nEnter the width of the rectangle: ";	
			cin >> width;
			area = length * width;
			cout << "The area of your rectangle is " << area;
			break;
			
		case 3: // Area of a triangle
			cout << "\nEnter the base of the triangle: ";	
			cin >> base;
			cout << "\nEnter the height of the triangle: ";	
			cin >> height;
			area = (base * height)/2;
			cout << "The area of your triangle is " << area;
			break;
		
		case 4: // Quit
			cout << "I am sorry that you are choosing to leave the program and ignore math! Good riddance!";
			break;
			
		default:
			// If the user enters a value that is not in the original set
			cout << "We are sorry, but you entered a choice that doesn't make any sense! Learn to read!";
	}
	return 0;
}
