// Miles Per Gallon

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	double gasMileage,
		   gallons,
		   milesDriven;
		   
	// Prompt to user		   
	cout << "\nEnter the number of gallons of gas the car can hold: ";
	cin >> gallons;
	
	cout << "\nEnter the number of miles it can be driven on a fll tank: ";
	cin >> milesDriven;
		   
	// Calculations
	gasMileage = milesDriven / gallons;
	
	// Set decimal point
	cout << fixed << showpoint << setprecision(1);
	
	// Display results
	cout << "\n\nYour vehicle can get " << gasMileage << " miles per gallon.";
	
	return 0;
}
