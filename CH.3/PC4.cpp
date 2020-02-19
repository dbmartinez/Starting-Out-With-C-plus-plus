// How Much Insurance?

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const double PERCENT_AMOUNT = 0.8;
	double minimumCost, cost;
	
	// User input
	cout << "\nEnter in the replacement cost of the building: ";
	cin >> cost;
	
	// Calculations
	minimumCost = cost * PERCENT_AMOUNT;
	
	// Results
	cout << "\n\nThe total cost is: $" << minimumCost << endl;
	
	return 0;
}
