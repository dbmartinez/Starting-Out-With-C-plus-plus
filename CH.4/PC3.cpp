// Magic Dates

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	int month,
		day,
		answer,
		year;
	
	// Description
	cout << "\nEnter in the month, day, and year(numerical form)\n";
	
	// User input for month
	cout << "\nEnter in Month:\n";
	cin >> month;
	
	// Month is between 1 - 12
	if(month < 1 || month > 12)
	{
		cout << "\nINVALID INPUT FOR MONTH...RESTART PROGRAM...";
		exit(0);
	}
	
	// User input for day
	cout << "\nEnter in day:\n";
	cin >> day;
	
	if(month == 1)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR JANUARY...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 2)
	{
		if(day < 1 || day > 28)
		{
			cout << "\nINVALID INPUT DAY FOR FEBRUARY...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 3)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR MARCH...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 4)
	{
		if(day < 1 || day > 30)
		{
			cout << "\nINVALID INPUT DAY FOR APRIL...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 5)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR MAY...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 6)
	{
		if(day < 1 || day > 30)
		{
			cout << "\nINVALID INPUT DAY FOR JUNE...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 7)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR JULY...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 8)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR AUGUST...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 9)
	{
		if(day < 1 || day > 30)
		{
			cout << "\nINVALID INPUT DAY FOR SEPTEMBER...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 10)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR OCTOBER...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 11)
	{
		if(day < 1 || day > 30)
		{
			cout << "\nINVALID INPUT DAY FOR NOVEMBER...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	else if(month == 12)
	{
		if(day < 1 || day > 31)
		{
			cout << "\nINVALID INPUT DAY FOR DECEMBER...RESTART PROGRAM...";
			exit(0);
		}
	}
	
	// User input for year
	cout << "\nEnter in year(In two Digit form):\n";
	cin >> year;
	
	// Calculations
	answer = month * day;

	// If date is magic
	if(answer == year)
	{
		cout << endl;
		cout << month << "/" << day << "/" << year;
		cout << "\nTHIS DATE IS MAGIC!!!!!!\n";
	}
	
	// Else, date is not magic
	else if(answer != year)
	{
		cout << endl;
		cout << month << "/" << day << "/" << year;
		cout << "\nThis date is not magic :(\n";
	}
	
	return 0;
}
