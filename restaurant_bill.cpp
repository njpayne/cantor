/* Write a program that computes the tax and tip on a restaurant bill for a patron with a $44.50 meal charge */
# include <iostream>
using namespace std;

int main() // Create the main program
{
	cout.precision(4); // Note that I Have used cout.precision to set precision & fix to toggle fixed-point mode
	
	float meal, tip_rate, tax_rate, total_pre_tip, total_post_tip; // Note the end of the line of the program using //
	
	meal = 44.50; 
	tax_rate = 6.75;
	tip_rate = 15;
				
	cout << "Welcome to the restaurant bill program!\n";
	cout << "Last night, I noted that you visited a restaurant and paid $44.50!\n";
		
	total_pre_tip = meal + (meal * (tax_rate / 100));
	total_post_tip = total_pre_tip + (total_pre_tip * (tip_rate / 100));
	
	cout << "Your total bill can be summarized as follows:" << endl;
	cout << "Meal cost: " << meal << endl;
	cout << "Tax amount: " << (meal * (tax_rate / 100)) << endl;
	cout << "Tip amount: " << (total_pre_tip * (tip_rate / 100)) << endl;
	cout << "Total bill: " << total_post_tip << endl;
	cout << "I hope that you had an excellent meal!";		
	return 0;
}

