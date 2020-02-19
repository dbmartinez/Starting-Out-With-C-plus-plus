// Number of acres

// libraries needed
#include<iostream>

using namespace std;

// Main function
int main()
{
	// Variables
	double oneAcre = 43450,
		   sizeOfLand = 869 * 360,
		   result;
	
	// Calculations
	result = sizeOfLand/oneAcre;
	
	// Information
	cout << "\nOnce acre of land is " << oneAcre;
	cout << "\nSize of land is 869ft x 360ft";
	cout << " which is " << sizeOfLand << " square feet";
	
	// Result
	cout << "\nNumber of acres needed is " << result << " acres\n";
	
	return 0;
}
