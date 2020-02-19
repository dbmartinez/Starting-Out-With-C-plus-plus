// Ingredient Adjuster

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const double COOKIE = 48;
	const double CUP_OF_BUTTER = 1;
	const double CUPS_OF_SUGAR = 1.5;
	const double CUPS_OF_FLOUR = 2.75;
	int cookies;
	double temp, sugarNeeded, butterNeeded, flourNeeded;
	
	// User input
	cout << "\nHow many cookies would you like to make: ";
	cin >> cookies;
	
	// Calculations
	temp = cookies / COOKIE;
	sugarNeeded = temp * CUPS_OF_SUGAR;
	butterNeeded = temp * CUP_OF_BUTTER;
	flourNeeded = temp * CUPS_OF_FLOUR;
	
	// Results
	cout << "\nIngredients Needed to make " << cookies << " cookies.";
	cout << "\n--------------------------------------";
	cout << fixed << showpoint << setprecision(2);
	cout << "\nCups of sugar: " << setw(5) << sugarNeeded;
	cout << "\nCups of butter: " << butterNeeded;
	cout << "\nCups of flour: " << setw(5) << flourNeeded << endl;
	
	return 0;
}
