// Interest Earned

// Libraries needed
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	double principal,
		   interest_Rate,
		   interest,
		   newInterestRate,
		   compounded,
		   amount;
	
	// User inputs
	cout << "\nEnter in principal amount: $";
	cin >> principal;
	
	cout << "\nEnter in Interest rate: ";
	cin >> interest_Rate;
	
	cout << "\nEnter in times interest is compounded: ";
	cin >> compounded;
	
	// Calculations
	newInterestRate = interest_Rate / 100;
	amount = principal * pow(1 + (newInterestRate / compounded), compounded);
	interest = amount - principal;
	
	// Final result
	cout << "\nInterest Rate: " << setw(16) << interest_Rate << "%";
	cout << "\nTimes Compounded: " << setw(13) << compounded;
	cout << fixed << showpoint << setprecision(2);
	cout << "\nPrincipal: " << setw(12) << "$" << setw(8) << principal;
	cout << "\nInterest: " << setw(13) << "$" << setw(8) << interest;
	cout << "\nFinal Balance: " << setw(8) << "$" << setw(8) << amount;
	
	return 0;
}
