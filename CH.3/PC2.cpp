// Stadium Seating

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Constant variables
	const double CLASS_A = 15,
		   		 CLASS_B = 12,
		   		 CLASS_C = 9;
	// Variables	   		 
	double ticketSales,
		   ticketSoldA,
		   ticketSoldB,
		   ticketSoldC,
		   totalTicketsA,
		   totalTicketsB,
		   totalTicketsC;
		   

	// Get user to input tickets purchased in class a, b, and c	   
	cout << "\nHow many tickets for class A of seats were sold: ";
	cin >> ticketSoldA;
	
	cout << "\nHow many tickets for class B of seats were sold: ";
	cin >> ticketSoldB;
	
	cout << "\nHow many tickets for class C of seats were sold: ";
	cin >> ticketSoldC;
	
	// Calculations
	totalTicketsA = ticketSoldA * CLASS_A;
	totalTicketsB = ticketSoldB * CLASS_B;
	totalTicketsC = ticketSoldC * CLASS_C;
	
	// Set decimal to 2 places
	cout << fixed << showpoint << setprecision(2);
	
	// Display income result
	cout << "\n\nIncome" << setw(20) << "Sales";
	cout << "\n======" << setw(20) << "=====";
	cout << "\nIncome from Class A: $" << setw(14) << totalTicketsA;	
	cout << "\nIncome from Class B: $" << setw(14) << totalTicketsB;
	cout << "\nIncome from Class C: $" << setw(14) << totalTicketsC;
	
	// Calculations
	ticketSales = totalTicketsA + totalTicketsB + totalTicketsC;
	
	// Display results
	cout << "\nIncome Total Sales:  $" << setw(14) << ticketSales;
	cout << endl;
	
	return 0;
}
