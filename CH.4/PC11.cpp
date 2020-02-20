// Geometry Calculator

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

// Main function
int main()
{
	// Variables
	int choice;
	
	// Main Menu
	cout << "\n1. Calculate the Area of a Circle";
	cout << "\n2. Calculate the Area of a Rectangle";
	cout << "\n3. Calculate the Area of a Triangle";
	cout << "\n4. Quit";
	cout << "\n\nEnter in choice: \n";
	cin >> choice;
	
	// User chooses 1
	if(choice == 1)
	{
		// Variables
		int num1;
		double pi = 3.14159,
			   area;
		
		// Display prompt
		cout << "\nI will calculate the area of a circle";
		cout << "\nEnter in the radius of the circle: ";
		cin >> num1;
		
		// Calculations
		area = pi * pow(num1, 2.0);
		
		// Set to four digits
		cout << setprecision(4);
		
		// Result
		cout << "\nArea of the circle is " << area;	
	}
	
	// User chooses 2
	else if(choice == 2)
	{
		// Variables
		int num2, num3, area;
		
		// Display prompt
		cout << "\nI will calculate the area of a Rectangle";
		cout << "\nEnter in the length then the width: \n";
		cin >> num2 >> num3;
		
		// Calculations
		area = num2 * num3;
		
		// Result
		cout << "\nArea of the rectangle is " << area << endl;
	}
	
	// User chooses 3
	else if(choice == 3)
	{
		// Variables
		int num4, num5;
		double area;
		
		// Display prompt
		cout << "\nI will calculate the area of a Triangle";
		cout << "\nEnter in the height then the base: \n";
		cin >> num4 >> num5;
		
		// Calculations
		area = 0.5 * num5 * num4;
		
		// Result
		cout << "\nArea of the triangle is " << area << endl;
	}
	
	// User chooses out of range
	else if(choice < 1 || choice > 4)
	{
		cout << "\n\nERROR!!!! run program again and enter in ";
		cout << "choice between 1-4....\n\n";	
	}
	
	// Exit program
	else
	{
		exit(0);
	}
	
	return 0;
}
