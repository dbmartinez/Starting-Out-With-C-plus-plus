// Future Ocean Levels

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double milliMeters = 3.1,
		   years = 15,
		   centi = 0.1,
		   inches = 0.3937,
		   totalInches, totalCenti;
		   
		   
	// Calculations
	totalCenti = milliMeters * centi * years;
	totalInches =  totalCenti * inches;
		   
	
	// Results	   
	cout << "\nOcean level expected to rise " << totalCenti << " centimeters."; 
	cout << "\nOcean level expected to rise " << totalInches << " inches.";
	
	return 0;
}
