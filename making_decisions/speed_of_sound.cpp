/*  The speed of sound varies depending on the medium through which it travels.
In general, sound travels fastest in rigid media, such as steel, slower in liquid media, such as water,
and slowest of all in gases, such as air. The following table shows the approximate speed of sound,
measured in feet per second, in air, water, and steel (Speed is feet per sec): Air, 1100; Water 4900; Steel 16400
Write a program that allows a user to select air, water or steel. After the user has made a selection
the number of feet a sound wave will travel in the selected medium should be entered.
The program should then display the amount of time it will take. Round the answer to 4 decimal places. */

# include <iostream>
using namespace std;

int main() // This is the main function
{
	// Instantiate the substance
	int substance; 
	double time_taken, feet;
	double air = 1100; // Feet per second
	double water = 4900; // Feet per second
	double steel = 16400; // Feet per second
		
	// Present the user with some options to select & get the input
	cout << "Welcome to the speer of sound calculation program!\n";
	cout << "What type of substance would you like measure the speed of sound in?\n";
	cout << "Enter 1 for air, 2 for water, and 3 for steel:";
	cin >> substance;
	
	// 	Ask the user to input the total number of feet the soundwave will travel
	switch(substance)
	{
		case 1:
			// This is if the user selects air
			cout << "How many feet will your sound wave travel in air?";
			cin >> feet;			
			time_taken = feet / air;
			cout << "Based on our calculations, it will take " << time_taken << "seconds\n for sound to travel" << feet << "feet in air!";
			break;
		
		case 2:
			// This is if the user selects water
			cout << "How many feet will your sound wave travel in water?";			
			time_taken = feet / water;
			cout << "Based on our calculations, it will take " << time_taken << "seconds\n for sound to travel" << feet << "feet in water!";
			break;
		
		case 3:
			// This is if the user selects steel
			cout << "How many feet will your sound wave travel in steel?";			
			time_taken = feet / steel;
			cout << "Based on our calculations, it will take " << time_taken << "seconds\n for sound to travel" << feet << "feet in steel!";
			break;
		
		default:
			// This is the process for all other cases
			cout << "I am sorry, but you did not select a proper input! Please try again!";
			// Normally would do a nice little loop here!
	}
	return 0;	
}

