// Vacation days

// Libraries needed
#include<iostream>
#include<cmath>
using namespace std;

// Main Function
int main()
{
	// Variables
	const int HOURS = 24;
	const int MINUTES = 60;
	const int SECONDS = 60;
	int days, totalHours, totalMinutes, totalSeconds;
	
	// Display prompt to user
	cout << "\nEnter in the number of days for your vacation: ";
	cin >> days;
	
	// Calculations
	totalHours = days * HOURS; 
	totalMinutes = (days * MINUTES) * HOURS;
	totalSeconds = (days * MINUTES) * HOURS * SECONDS;
	
	// Results
	cout << "\nTotal hours: " << totalHours;
	cout << "\nTotal Minutes: " << totalMinutes;
	cout << "\nTotal Seconds: " << totalSeconds;
	
	return 0;
}
