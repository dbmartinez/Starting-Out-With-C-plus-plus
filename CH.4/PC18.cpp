// The Speed of Sound

// Classes needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const int AIR = 1100;
	const int WATER = 4900;
	const int STEEL = 16400;
	
	// Variables
	int choice;
	double feet;
	
	cout << "\nMenu";
	cout << "\n----";
	cout << "\n1) Air";
	cout << "\n2) Water";
	cout << "\n3) Steel\n";
	
	// User input
	cout << "\nEnter choice(1,2,or 3) from the menu:\n";
	cin >> choice;
	
	if(choice < 1 || choice > 3)
	{
		cout << "\nIncorrect choice...restart program.";
		exit(0);
	}	
	
	else if(choice == 1)
	{
		// User input for feet
		cout << "\nEnter distance(in feet) that the sound is traveling.";
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		
		if(feet < 0)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		feet /= AIR;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << feet << " seconds to travel";
	}
	
	else if(choice == 2)
	{	
		// User input for feet
		cout << "\nEnter distance(in feet) that the sound is traveling.";
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		
		if(feet < 0)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		feet /= WATER;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << feet << " seconds to travel";
	}
	
	else if(choice == 3)
	{
		// User input for feet
		cout << "\nEnter distance(in feet) that the sound is traveling.";
		cout << "\nEnter the number of feet: ";
		cin >> feet;
		
		if(feet < 0)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		feet /= STEEL;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << feet << " seconds to travel";
	}
	
	return 0;
}
