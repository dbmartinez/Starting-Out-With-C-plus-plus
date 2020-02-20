// Celsius to Fahrenheit Table

// Libraries needed
#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double celsius, 
		   fahrenheit; 
	
	cout << "\nCelsius\t\tFahrenheit\n";
	cout << "----------------------------\n";
	
	for(int celsius = 0; celsius <= 30; celsius++)
	{
		// Calculations
		fahrenheit = (1.8 * celsius) + 32;
		
		cout << celsius << "\t\t" << fahrenheit << endl;
	}
	
	return 0;
}
