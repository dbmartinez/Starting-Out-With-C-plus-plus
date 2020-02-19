// How Much Paint

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double gallons = 340,
			height = 6,
			length = 100,
			totalGallons;
	
	// Calculations
	totalGallons = 2 * (height * length) / gallons;
	
	// Results
	cout << "\nAbout " << totalGallons << " gallons is needed to do 2 coats";
	cout << " of paint 6 ft high and 100 ft long...";
	
	return 0;
}
