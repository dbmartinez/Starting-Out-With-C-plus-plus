// Circuit Board Price

// Libraries needed
#include<iostream>

using namespace std;

// Main function
int main()
{
	// Variables
	double cost = 14.95,
		   percent = 0.35,
		   leftOver, totalCost;
		   
	// Calculations
	leftOver = cost * percent;
	totalCost = leftOver + cost;	   

	// Information
	cout << "\nThe cost to make a circuit board is $" << cost;
	cout << "\nWe want to make a 35% profit...";
		   
	// Result
	cout << "\n\nTo make a 35% percent we need to sell the ";
	cout << "circuit boards at $" << totalCost << endl;
	
	return 0;
}
