// Change for a Dollar Game

// Classes needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const int DOLLAR = 100;
	const int PENNIES = 1;
	const int NICKELS = 5;
	const int DIMES = 10;
	const int QUARTERS = 25;
	
	// Variables
	int pennies,
		nickels,
		dimes,
		quarters,
		total;
	
	// Info and user input
	cout << "\nEnter in coins that is used to make one dollar...\n\n";
	cout << "\nEnter in the amount of Pennies: ";
	cin >> pennies;
	
	cout << "\nEnter in the amount of Nickels: ";
	cin >> nickels;
	
	cout << "\nEnter in the amount of Dimes: ";
	cin >> dimes;
	
	cout << "\nEnter in the amount of Quarters: ";
	cin >> quarters;
	
	// Calculations
	pennies *= PENNIES;
	nickels *= NICKELS;
	dimes *= DIMES;
	quarters *= QUARTERS;
	
	total = pennies + nickels + dimes + quarters;
	
	if(total == DOLLAR)
	{
		cout << "\nCongrats...You win";
	}
	
	else if(total > DOLLAR)
	{
		cout << "\nAmount is greater than one dollar, try again...";
	}
	
	else
	{
		cout << "\nAmount is less than one dollar, try again...";
	}
	
	return 0;
}
