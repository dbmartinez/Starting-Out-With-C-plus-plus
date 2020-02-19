// Property Tax

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const int ASSESSED_VALUE = 100;
	const double PROPERTY_TAX = 0.6;
	int property;
	double tax_Rate, total;
	
	// User enters value of property
	cout << "\nEnter the value of the property: $";
	cin >> property;
	
	//
	cout << "\nEnter the current tax rate: $";
	cin >> tax_Rate;
	
	// Calculations
	total = ((property * PROPERTY_TAX) * tax_Rate) / ASSESSED_VALUE;
	
	// Final result
	cout << "\nAnnual property tax that will be charged: $" << total;
	
	return 0;
}
