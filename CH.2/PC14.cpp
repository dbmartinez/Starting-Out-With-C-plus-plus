// Basketbal player height

// Libraries needed
#include<iostream>

using namespace std;

// Main function
int main()
{
	// Variables
	int inches = 74;
	double newHeight,
		   newHeight1;
	
	// Calculations
	newHeight = 74 / 12;		// Integer division
	newHeight1 = inches % 12;	// Modulus for remainder
	
	// Information
	cout << "\nA basketball player is " << inches << " inches tall";
	cout << "\nWhat is his/her height in feet/inches...";
	
	// Results
	cout << "\n\nThe player is " << newHeight;
	cout << " feet and " << newHeight1 << " inches tall.";
		
	return 0;
}
