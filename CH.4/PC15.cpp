// February Days

// Classes needed
#include<iostream>
using namespace std;

// Main Function
int main()
{
	// Variables
	int year;
	
	// User input
	cout << "\nEnter a year: ";
	cin >> year;
	
	if((year%100 == 0 && year%400 == 0) || (year%100 != 0 && year%4 == 0))
	{
		// Display results
		cout << "\n\nIn " << year << " February has 29 days.";
	}
	
	else
	{
		/// Display results
		cout << "\n\nIn " << year << " February has 28 days.";
	}
	
}
