// Monthly Payments

// Libraries needed
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

// Main function
int main()
{
	// Variables
	
	double loan_Amount,
		   monthly_Payments,
		   interest_Rate,
		   top,
		   bottom,
		   newInterest,
		   payment,
		   paid_Back,
		   interest_paid;
		   
	
	// User inputs
	cout << "\nEnter loan amount: $";
	cin >> loan_Amount;
	
	cout << "\nEnter in number of payments: ";
	cin >> monthly_Payments;
	
	cout << "\nEnter in interest rate: ";
	cin >> interest_Rate;
	
	// Calculations
	newInterest = interest_Rate / 100;
	top = newInterest * pow(1 + newInterest, monthly_Payments);
	bottom = pow(1 + newInterest, monthly_Payments) - 1;
	payment = (top / bottom) * loan_Amount;
	paid_Back = payment * monthly_Payments;
	interest_paid = paid_Back - loan_Amount;
	
	// Final results
	cout << "\nMonthly Interest Rate: " << setw(12) << interest_Rate << "%";
	cout << "\nNumber of Payments: " << setw(15) << monthly_Payments;
	cout << fixed << showpoint << setprecision(2);
	cout << "\nLoan Amount: " << setw(13) << "$" << setw(9) << loan_Amount;
	cout << "\nMonthly Payment: " << setw(9) << "$" << setw(9) << payment;
	cout << "\nAmount Paid Back: " << setw(8) << "$" << setw(9) << paid_Back;
	cout << "\nInterest Paid: " << setw(11) << "$" << setw(9) << interest_paid;
	
	return 0;
}
