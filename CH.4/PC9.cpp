//Software Sales

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const double RETAIL = 199;
	const double DISCOUNT2 = .2;
	const double DISCOUNT3 = .3;
	const double DISCOUNT4 = .4;
	const double DISCOUNT5 = .5;
	double units,
		   total,
		   totala,
		   totalb;
	
	// User input
	cout << "\nEnter the number of units purchased: ";
	cin >> units;
	cout << fixed << showpoint << setprecision(2);
	
	if(units >= 10 && units <= 19)
	{
		total = units * RETAIL;
		totala = total * DISCOUNT2;
		totalb = total - totala;
		
		cout << "\nTotal cost of purchase: $" << totalb;
	}
	
	else if (units >= 20 && units <= 49)
	{
		total = units * RETAIL;
		totala = total * DISCOUNT3;
		totalb = total - totala;
		
		cout << "\nTotal cost of purchase: $" << totalb;
	}
	
	else if (units >= 50 && units <= 99)
	{
		total = units * RETAIL;
		totala = total * DISCOUNT4;
		totalb = total - totala;
		
		cout << "\nTotal cost of purchase: $" << totalb;
	}
	
	else if (units >= 100)
	{
		total = units * RETAIL;
		totala = total * DISCOUNT5;
		totalb = total - totala;
		
		cout << "\nTotal cost of purchase: $" << totalb;
	}
	
	else if(units <= 0)
	{
		cout << "\nCan't be a negative number, program terminated...\n";
		exit(0);
	}
	
	return 0;
}
