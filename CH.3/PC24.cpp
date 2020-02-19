// Angle Calculator

// Libraries needed
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Main function
int main()
{
	// Variables
	double radians,
		   sine,
		   cosine,
		   tangent;
	
	// User input
	cout << "\nEnter angle in radians: ";
	cin >> radians;
	
	// Calculations
	sine = sin(radians);
	cosine = cos(radians);
	tangent = tan(radians);
	
	// Final result
	cout << fixed << showpoint << setprecision(4);
	cout << "\nSINE: " << sine;
	cout << "\nCOSINE: " << cosine;
	cout << "\nTANGENT: " << tangent;
	
	return 0;
}
