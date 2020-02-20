// The Speed of Sound in Gases

// Classes needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const double CARBON_DIOXIDE = 258.0;
	const double AIR = 331.5;
	const double HELIUM = 972.0;
	const double HYDROGEN = 1270.0;
	
	// Variables
	int choice;
	double seconds,
		   newSeconds;
	
	cout << "\nMenu";
	cout << "\n----";
	cout << "\n1) Carbon Dioxide";
	cout << "\n2) Air";
	cout << "\n3) Helium";
	cout << "\n4) Hydrogen\n";
	
	// User input
	cout << "\nEnter choice(1,2, or 3) from the menu:\n";
	cin >> choice;
	
	if(choice < 1 || choice > 4)
	{
		cout << "\nIncorrect choice...restart program.";
		exit(0);
	}	
	
	else if(choice == 1)
	{
		// User input for feet
		cout << "\nEnter number in seconds(0-30) that the sound is traveling.";
		cout << "\nEnter the time of seconds: ";
		cin >> seconds;
		
		if(seconds < 0 || seconds > 30)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		seconds *= CARBON_DIOXIDE;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << seconds << " meters to travel";
	}
	
	else if(choice == 2)
	{	
		// User input for feet
		cout << "\nEnter number in seconds(0-30) that the sound is traveling.";
		cout << "\nEnter the time of seconds: ";
		cin >> seconds;
		
		if(seconds < 0 || seconds > 30)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		seconds *= AIR;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << seconds << " meters to travel";
	}
	
	else if(choice == 3)
	{
		// User input for feet
		cout << "\nEnter number in seconds(0-30) that the sound is traveling.";
		cout << "\nEnter the time of seconds: ";
		cin >> seconds;
		
		if(seconds < 0 || seconds > 30)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		seconds *= HELIUM;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << seconds << " meters to travel";
	}
	
	else if(choice == 4)
	{
		// User input for feet
		cout << "\nEnter number in seconds(0-30) that the sound is traveling.";
		cout << "\nEnter the time of seconds: ";
		cin >> seconds;
		
		if(seconds < 0 || seconds > 30)
		{
			cout << "\nCannot be negative...restart program.";
			exit(0);
		}
		
		// Calculation
		seconds *= HYDROGEN;
		
		// Result
		cout << fixed << setprecision(4);
		cout << "\nIt will take " << seconds << " meters to travel";
	}
	
	return 0;
}
