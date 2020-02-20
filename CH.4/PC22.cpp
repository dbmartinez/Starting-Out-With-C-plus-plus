// Mobile Service Provider

// Libraries needed
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const double PACKAGE_A_MONTH = 39.99;
	const double PACKAGE_B_MONTH = 59.99;
	const double PACKAGE_C_MONTH = 69.99;
	const double PACKAGE_A_MINUTES = 450;
	const double PACKAGE_B_MINUTES = 900;
	const double PACKAGE_A_ADDITIONAL_COST = 0.45;
	const double PACKAGE_B_ADDITIONAL_COST = 0.40;
	
	// Variables
	string firstName,
		   lastName;
	char package;
	int minutes;
	double result,
		   new_Minutes,
		   package_B,
		   package_C;
	
	// User enters in first name
	cout << "\nEnter your first name: ";
	cin >> firstName;
	
	// User enters in last name
	cout << "\nEnter your last name: ";
	cin >> lastName;
	
	// User enters package
	cout << "\nEnter in the package you've purchased(A,B,C): ";
	cin >> package;
	
	// User enters minutes used
	cout << "\nHow many minutes were used: ";
	cin >> minutes;
	
	// Switch statement
	switch(package)
	{
		case 'a':
		case 'A':
			
			if(minutes < PACKAGE_A_MINUTES)
			{
				result += PACKAGE_A_MONTH;
			}
			
			else if(minutes > PACKAGE_A_MINUTES)
			{
			 	new_Minutes = minutes - PACKAGE_A_MINUTES;
				result = new_Minutes * PACKAGE_A_ADDITIONAL_COST + PACKAGE_A_MONTH;
				
				// Results
				cout << "\n\nBill Results\n";
				cout << "------------\n";
				cout << "\nCustomer Name: " << firstName << " " << lastName;
				cout << "\nPackage Purchased: " << package;
				cout << "\nMinutes that were used: " << minutes;
				cout << fixed << showpoint << setprecision(2);
				cout << "\nTotal Amount Due: $" << result << endl;
				
				// Calculation
				package_B = result - PACKAGE_B_MONTH;
				package_C = result - PACKAGE_C_MONTH;
				
				// Savings
				cout << "\n\nSavings\n";
				cout << "-------\n";
				cout << "\nBy using Package B you will save: " << package_B;
				cout << "\nBy using Package C you will save: " << package_C;
				break;
			}
			
			else if(minutes > PACKAGE_B_MINUTES)
			{
				new_Minutes = minutes - PACKAGE_B_MINUTES;
				result = new_Minutes * PACKAGE_A_ADDITIONAL_COST + PACKAGE_A_MONTH;
				
				// Results
				cout << "\n\nBill Results\n";
				cout << "------------\n";
				cout << "\nCustomer Name: " << firstName << " " << lastName;
				cout << "\nPackage Purchased: " << package;
				cout << "\nMinutes that were used: " << minutes;
				cout << fixed << showpoint << setprecision(2);
				cout << "\nTotal Amount Due: $" << result << endl;
				
				// Calculation
				package_B = result - PACKAGE_B_MONTH;
				package_C = result - PACKAGE_C_MONTH;
				
				// Savings
				cout << "\n\nSavings\n";
				cout << "-------\n";
				cout << "\nBy using Package B you will save: " << package_B;
				cout << "\nBy using Package C you will save: " << package_C;
				break;
			}
			
			// Results
			cout << "\n\nBill Results\n";
			cout << "------------\n";
			cout << "\nCustomer Name: " << firstName << " " << lastName;
			cout << "\nPackage Purchased: " << package;
			cout << "\nMinutes that were used: " << minutes;
			cout << fixed << showpoint << setprecision(2);
			cout << "\nTotal Amount Due: $" << result << endl;
		
		case 'b':
		case 'B':
	 		
	 		if(minutes < PACKAGE_B_MINUTES)
			{
				result += PACKAGE_B_MONTH;
			}
	 		
	 		else if(minutes > PACKAGE_B_MINUTES)
			{
			 	new_Minutes = minutes - PACKAGE_B_MINUTES;
				result = new_Minutes * PACKAGE_B_ADDITIONAL_COST + PACKAGE_B_MONTH;
				
				// Results
				cout << "\n\nBill Results\n";
				cout << "------------\n";
				cout << "\nCustomer Name: " << firstName << " " << lastName;
				cout << "\nPackage Purchased: " << package;
				cout << "\nMinutes that were used: " << minutes;
				cout << fixed << showpoint << setprecision(2);
				cout << "\nTotal Amount Due: $" << result << endl;
				
				// Calculation
				package_C = result - PACKAGE_C_MONTH;
				
				// Savings
				cout << "\n\nSavings\n";
				cout << "-------\n";
				cout << "\nBy using Package C you will save: " << package_C;
				break;
			}
			
			// Results
			cout << "\n\nBill Results\n";
			cout << "------------\n";
			cout << "\nCustomer Name: " << firstName << " " << lastName;
			cout << "\nPackage Purchased: " << package;
			cout << "\nMinutes that were used: " << minutes;
			cout << fixed << showpoint << setprecision(2);
			cout << "\nTotal Amount Due: $" << result << endl;
			break;
			
			
		case 'c':
		case 'C':
				
			// Results
			cout << "\n\nBill Results\n";
			cout << "------------\n";
			cout << "\nCustomer Name: " << firstName << " " << lastName;
			cout << "\nPackage Purchased: " << package;
			cout << "\nMinutes that were used: " << minutes;
			cout << "\nTotal Amount Due: $" << PACKAGE_C_MONTH << endl;
			break;	
	}
	
	return 0;
}
