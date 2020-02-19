// Stock Transaction Program

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const double SHARES = 100;
	const double FIRST_SHARE = 45.50;
	const double SEC_SHARE = 47.92;
	const double PERCENT = 0.02;
	double amount_Paid,
		   commission_Paid,
		   amount_Paid2,
		   commission_Paid2,
		   total;
	
	// Calculations
	amount_Paid = SHARES * FIRST_SHARE;
	commission_Paid = PERCENT * amount_Paid;
	amount_Paid2 = SHARES * SEC_SHARE;
	commission_Paid2 = PERCENT * amount_Paid2;
	total = amount_Paid2 - (amount_Paid + commission_Paid + commission_Paid2);
	
	// Final result
	cout << fixed << showpoint << setprecision(2);
	cout << "\nAmount that was paid for the stock: $" << setw(9) << amount_Paid;
	cout << "\nCommission paid when buying stock:  $" << setw(9) << commission_Paid;
	cout << "\nAmount stock sold for:              $" << setw(9) << amount_Paid2;
	cout << "\nCommission paid after being sold:   $" << setw(9) << commission_Paid2;
	cout << "\nAmount of profit/loss:              $" << setw(9) << total;
	
	return 0;
}
