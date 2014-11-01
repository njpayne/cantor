// Re-write max_min so that you can enable looping & repetition through all the various variables

#include <iostream>
using namespace std;

int main ()
{
	int minimum, maximum;
	const int Numb = 10; // Determine how many elements will be in the array
	int a[Numb]; // Note that the array here has 10 elements
	
	cout << "Welcome to the max / min number program\n!"; 
	cout<<"Please enter 10 values for the array:"; // Prompt the user for 10 values.
	
	for(int i = 0; i < 10; i++)
	{
		cout<< "\nEnter value: ";
		cin>> a[i]; // Put the next value into the array
	}
	
	minimum = a[0]; // Set the minimum equal to the first position in the array (this is the base case)
	maximum = a[0]; // Set the maximum equal to the first position in the arrry (this is the base case)
	
	for(int i=1; i<10 ;i++)
		{
			if(minimum > a[i])
			{
				minimum = a[i];
			}
			else if( maximum <a[i])
			{
				maximum = a[i];
			}
		}
	
	cout << "The maximum number is: "<< maximum << endl;
	cout << "The minimum number is: "<< minimum << endl;
	
return 0;

}
