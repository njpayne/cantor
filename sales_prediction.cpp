# include <iostream>
using namespace std; // Set the initial namespace

int main() // Create the main function
{
	double sales, tax, profit; // Create the variables
	
	sales = 4600000;
	tax = 0.62;
	profit = sales * tax;
	
	cout << "After generating a total of " << sales << " dollars, with a tax rate of \n";
	cout << (tax * 100) << " percent, the total profit is " << profit;
	return 0;
}
