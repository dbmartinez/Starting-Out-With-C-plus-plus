// Celsius to Fahrenheit

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double celsius, fahrenheit; 
	
	cout << "\nInput temperature in degrees celsius: ";
	cin >> celsius;
	
	// Calculations
	fahrenheit = (1.8 * celsius) + 32;
	
	// Final result
	cout << "\nTemperature in degrees fahrenheit: " << fahrenheit << endl;
	
	return 0;
}
