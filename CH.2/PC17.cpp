// Past Ocean Levels

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double milliMeters = 1.8,
		   centiMeters = 0.1,
		   inches = 0.3937,
		   totalInches, totalCenti;
		   
	// Calculations
	totalCenti = milliMeters * centiMeters; 
	totalInches = totalCenti * inches; 	   
		   
	// Results	   
	cout << "\nThe oceans rose " << totalCenti << " centimeters.";
	cout << "\nThe oceans rose " << totalInches << " inches.";		   
	
	return 0;
}
