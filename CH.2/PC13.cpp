// Pay Period Gross Pay

// Libraries needed
#include<iostream>

using namespace std;

int main()
{
	// Variables
	double annually = 39000,
		   month = 24,
		   biWeekly = 26,
		   totalMonth, totalWeekly;
	
	// Calculations
	totalMonth = annually / 24;
	totalWeekly = annually / 26;
	
	// Information
	cout << "\nAnnual salary: $" << annually;
	
	// Results
	cout << "\n\nGross pay twice a month: $" << totalMonth;
	cout << "\nGross pay bi-weekly: $" << totalWeekly;
	
	return 0;
}
