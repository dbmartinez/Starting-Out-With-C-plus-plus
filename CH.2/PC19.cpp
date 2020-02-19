// Annual High Temperatures

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double nyc = 85,
		denver = 88,
		pheonix = 106,
		tempRise = .02,
		newTemp, newNYC, newDenver, newPheonix;
		
	// Information
	cout << "\nOriginal Temperatures";
	cout << "\nNew York City: " << nyc;
	cout << "\nDenver: " << denver;
	cout << "\nPheonix: " << pheonix;
	
	// Calculations
	newNYC = (nyc * tempRise) + nyc;	
	newDenver = (denver * tempRise) + denver;
	newPheonix = (pheonix * tempRise) + pheonix;
		
	// Results
	cout << "\n\nNew Temperatures raised by 2 percent...";
	cout << "\nTemperature in New York City: " << newNYC;
	cout << "\nTemperature in Denver: " << newDenver;
	cout << "\nTemperature in Pheonix: " << newPheonix;
	
	return 0;
}
