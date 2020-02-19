// How Many Pizzas?

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
	const int AVERAGE_FOUR_SLICES = 4;
	int diameter,
		party,
		radius,
		area,
		slices,
		total_Slice,
		pizza;
		
	// User input
	cout << "\nHow many people attending the party: ";
	cin >> party;
	
	// User input
	cout << "\nWhat is the diameter of the pizza in inches: ";
	cin >> diameter;
	
	// Calculations
	radius = diameter / 2;
	area = PI * pow(radius, 2.0);
	slices = area / SLICE;
	total_Slice = party * AVERAGE_FOUR_SLICES;
	pizza = total_Slice / slices;
	
	// Final result
	cout << "\nThe area is: " << area;
	cout << "\nNumber of slices: " << slices;
	cout << "\nAmount of pizzas needed: " << pizza;
	
	return 0;
}
