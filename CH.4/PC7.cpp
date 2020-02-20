// Time Calculator

// Classes needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const int HOUR = 3600;
	const int DAY = 86400;
	const int MINUTE = 60;
	
	// Variables
	int seconds,
	    days,
	    hours,
	    minutes;
	
	// User input
	cout << "\nEnter in the number of seconds:\n";
	cin >> seconds;
	
	if(seconds >= DAY)
	{
		// Calculation
		days = seconds / DAY;
		
		cout << "\nThere is " << days << " day(s) in " << seconds << " seconds.";
	}
	
	else if(seconds >= HOUR && seconds < DAY)
	{
		// Calculation
		hours = seconds / HOUR;
		
		cout << "\nThere is " << hours << " hour(s) in " << seconds << " seconds.";
	}
	
	else if(seconds >= MINUTE && seconds < HOUR)
	{
		// Calculation
		minutes = seconds / MINUTE;
		
		cout << "\nThere is " << minutes << " minute(s) in " << seconds << " seconds.";	
	}
	
	return 0;
}
