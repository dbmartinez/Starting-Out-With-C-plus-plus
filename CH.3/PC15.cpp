// Currency

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const double YEN_PER_DOLLAR = 120.005;
	const double EUROS_PER_DOLLAR = 0.881;
	double dollar, newYen, newEuro;
	
	//
	cout << "\nEnter dollar amount to be converted to Yen and Euros: ";
	cin >> dollar;
	
	// Calculations
	newYen = dollar * YEN_PER_DOLLAR;
	newEuro = dollar * EUROS_PER_DOLLAR;
	
	// Final result
	cout << fixed << showpoint << setprecision(2);
	cout << "\nDollar in Yen: " << newYen << endl;
	cout << "\nDollar in Euro: " << newEuro << endl;
	
	return 0;
}
