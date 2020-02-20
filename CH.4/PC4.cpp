// Areas of Rectangles

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	int length1,
		width1,
		length2,
		width2,
		area1,
		area2;
	
	// Description
	cout << "\nEnter in length and width for 2 rectangles, when done ";
	cout << "entering in length, press enter to input width.\n\n";
	
	// User input for rectangle1
	cout << "Enter in length and width for rectangle 1: ";
	cin >> length1 >> width1;
	
	// User input for rectangle2
	cout << "Enter in length and width for rectangle 2: ";
	cin >> length2 >> width2;
	
	// Calculations
	area1 = length1 * width1;
	area2 = length2 * width2;
	
	// Which rectangle has the greater area or area is the same
	if(area1 > area2)
	{
		cout << "\nRectangle 1(" << area1 << ") is greater than rectangle 2(";
		cout << area2 << ")\n";
	}
	
	else if(area2 > area1)
	{
		cout << "\nRectangle 2(" << area2 << ") is greater than rectangle 1(";
		cout << area1 << ")\n";
	}
	
	else if(area1 == area2)
	{
		cout << "\nRectangle 1(" << area1 << ") is equal to rectangle 2(";
		cout << area2 << ")\n";
	}
	
	return 0;
}
