// Restaurant bill

// Headers needed
#include<iostream>

using namespace std;

// Main function
int main()
{
	// Variables
	double mealCharge = 44.5,
		tax = 6.75,
		totalBill,
		newTip,
		newTax;
	double tip = 15.0;

	// Display totals
	cout << "\nMeal cost: $" << mealCharge << "0";
	
	// Calculations
	newTax = (tax / 100) * mealCharge;
	newTip = (mealCharge + newTax) * (tip / 100);
	totalBill = mealCharge + newTax + newTip;
	
	cout << "\nTax amount: $" << newTax;
	cout << "\nTip amount: $" << newTip;
	
	cout << "\n\n===================";
	cout << "\nTotal bill: $" << totalBill;
	
	return 0;
}
