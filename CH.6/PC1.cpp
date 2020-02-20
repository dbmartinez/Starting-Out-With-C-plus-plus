// Markup

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double calculateRetail(double newCost, double newPercent);

// Main function
int main()
{
	// Variables
	double cost,
		   percent,
		   price;
	
	cout << "\nEnter in items wholesale cost:\n";
	cin >> cost;
	
	cout << "\nEnter markup percentage:\n";
	cin >> percent;
	
	price = calculateRetail(cost, percent);
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nItem's retail price is: $" << price << endl;
	
	return 0;
}

// Function calculateRetail
double calculateRetail(double newCost, double newPercent)
{
	// Variables
	double percent;
	
	// Calculations
	percent = newPercent / 100;
	return (newCost * percent) + newCost;;
}
