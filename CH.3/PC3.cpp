// Housing Costs

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const int ANNUAL = 12;
	double rent,
		   utilities,
		   phone,
		   cable,
		   totalMonthly, totalAnnual;
	
	// Prompt for user input
	cout << "\nWhat is your monthly cost for rent: $";
	cin >> rent;
	cout << "\nWhat is your monthly cost for utilities: $";
	cin >> utilities;
	cout << "\nWhat is your monthly phone bill: $";
	cin >> phone;
	cout << "\nWhat is your monthly cable bill: $";
	cin >> cable;
	
	// Calculations
	totalMonthly = rent + utilities + phone + cable;
	totalAnnual = totalMonthly * static_cast<double>(ANNUAL);
	
	// Results
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nResults";
	cout << "\n-------";
	cout << "\nYour total monthly bill is: $" << setw(10) << totalMonthly;
	cout << "\nYour total annual bill is:  $" << setw(10) << totalAnnual;
	
	return 0;
}
