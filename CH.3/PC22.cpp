// Pizza Slices

// Libraries needed
#include<iostream>
#include<cmath>
using namespace std;

// Main function
int main()
{
	// Variables
	const double PI = 3.14;
	const double SLICE = 14.125;
	int diameter,
		radius,
		area,
		slices;
	
	// User input
	cout << "\nWhat is the diameter of the pizza in inches: ";
	cin >> diameter;
	
	// Calculations
	radius = diameter / 2;
	area = PI * pow(radius, 2.0);
	slices = area / SLICE;
	
	// Final result
	cout << "\nThe area is: " << area;
	cout << "\nNumber of slices: " << slices;
	
	return 0;
}
