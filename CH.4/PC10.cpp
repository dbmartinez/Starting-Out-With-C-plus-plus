// Bank Charges

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const int BANK_CHARGE_PER_MONTH = 15;
	const double CHECKS_LESS_THAN_20 = 0.10; 
	const double CHECKS_LESS_THAN_39 = 0.08; 
	const double CHECKS_LESS_THAN_59 = 0.06; 
	const double CHECKS_GREATER_THAN_60 = 0.04; 
	int checks;
	double result;
		
	// User input
	cout << "\nInput the amount of checks written in the past Month: ";
	cin >> checks;
	
	// If input is less than zero...terminate program
	if(checks < 0)
	{
		cout << "\nCannot be a negative number, restart program...\n";
		exit(0);
	}
	
	// Check choices
	else if(checks <= 19)
	{
		// Calculations
		result = checks * CHECKS_LESS_THAN_20 + BANK_CHARGE_PER_MONTH;
		cout << fixed << showpoint << setprecision(2);
		cout << "\nBank fees for the past month: $" << result;
	}
	
	else if(checks >= 20 && checks <= 39)
	{
		// Calculations
		result = checks * CHECKS_LESS_THAN_39 + BANK_CHARGE_PER_MONTH;
		cout << fixed << showpoint << setprecision(2);
		cout << "\nBank fees for the past month: $" << result;
	}
	
	else if(checks >= 40 && checks <= 59)
	{
		// Calculations
		result = checks * CHECKS_LESS_THAN_59 + BANK_CHARGE_PER_MONTH;
		cout << fixed << showpoint << setprecision(2);
		cout << "\nBank fees for the past month: $" << result;
	}
	
	else
	{
		// Calculations
		result = checks * CHECKS_GREATER_THAN_60 + BANK_CHARGE_PER_MONTH;
		cout << fixed << showpoint << setprecision(2);
		cout << "\nBank fees for the past month: $" << result;
	}
	
	return 0;
}
