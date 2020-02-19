// Senior Citizen Property Tax

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const int ASSESSED_VALUE = 100;
	const int SENIOR_DISCOUNT = 5000;
	const double PROPERTY_TAX = 0.6;
	const double QUARTERLY_TAX = 0.25;
	int property;
	double tax_Rate, total, quarterly_Tax;
	
	// User enters value of property
	cout << "\nEnter the value of the property: $";
	cin >> property;
	
	// User enters tax rate
	cout << "\nEnter the current tax rate: $";
	cin >> tax_Rate;
	
	// Calculations
	total = (((property * PROPERTY_TAX) - SENIOR_DISCOUNT) * tax_Rate) / ASSESSED_VALUE;
	quarterly_Tax = total * QUARTERLY_TAX;
	
	// Final result
	cout << "\nAnnual property tax that will be charged: $" << total;
	cout << "\nThe quarterly tax bill is: $" << quarterly_Tax;	
	
	return 0;
}
