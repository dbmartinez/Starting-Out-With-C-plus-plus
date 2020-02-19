// Monthly Sales Tax

// Libraries needed
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Main function
int main()
{
	// Variables
	const double COUNTY_SALES_TAX = 0.02;
	const double STATE_SALES_TAX = 0.04;
	const double TOTAL_SALES_TAX = 0.06;
	const double FOR_CALCULATION = 1.06;
	string month;
	double amount, sales, total_Sales, total_County, total_State;
	
	// User enters month
	cout << "\nEnter in month and year: ";
	getline(cin, month);
	
	// User enters amount of cash
	cout << "\nTotal amount collected by cash register: $";
	cin >> amount;
	
	// Calculations
	sales = amount / FOR_CALCULATION;
	total_County = sales * COUNTY_SALES_TAX;
	total_State = sales * STATE_SALES_TAX; 
	total_Sales = sales * TOTAL_SALES_TAX;
	
	// Result
	cout << "\n\n\tMonth: " << month;
	cout << "\n\t--------------------";
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\tTotal Collected: " << setw(5) << "$"<< setw(9) << amount;
	cout << "\n\tSales: " << setw(15) << "$" << setw(9) << sales;
	cout << "\n\tCounty Sales Tax: " << setw(4) << "$" << setw(9) << total_County;
	cout << "\n\tState Sales Tax: " << setw(5) << "$" << setw(9) << total_State;
	cout << "\n\tTotal Sales Tax: " << setw(5) << "$" << setw(9) << total_Sales;
	
	return 0;
}
