// Box Office

// Libraries needed
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	const double PERCENT_THEATER = 0.8;
	const double PERCENT_DISTRIBUTOR = 0.2;
	const int ADULT_TICKETS = 10;
	const int CHILD_TICKETS = 6;
	double adult_tickets, child_tickets, totalAdult_tickets, totalChild_tickets,
	       totalRevenue, distributor, netRevenue;
	string movie;
	
	// User input
	cout << "\nEnter in the title of film: ";
	getline(cin, movie);
	
	cout << "\nHow many adult tickets were sold: ";
	cin >> adult_tickets;
	
	cout << "\nHow many child tickets were sold: ";
	cin >> child_tickets;
	
	// Calculations
	totalAdult_tickets = adult_tickets * ADULT_TICKETS;
	totalChild_tickets = child_tickets * CHILD_TICKETS;
	totalRevenue = totalAdult_tickets + totalChild_tickets;
	distributor = totalRevenue * PERCENT_DISTRIBUTOR;
	netRevenue = totalRevenue - distributor;
	
	// Results
	cout << "\n\n  Movie Name: " << setw(19) << "\"" << movie << "\"";
	cout << "\n  Adult Tickets Sold: " << setw(13) << adult_tickets;
	cout << "\n  Child Tickets Sold: " << setw(13) << child_tickets;
	cout << fixed << showpoint << setprecision(2);
	cout << "\n  Gross Box Office Revenue: " << setw(6) << "$ "<< totalRevenue;
	cout << "\n  Amount Paid to Distributor: " << setw(4) << "-$ "<< setw(7) << distributor;
	cout << "\n  Net Box Office Revenue: " << setw(8) << "$ "<< netRevenue;
	cout << endl;
	
	return 0;
}
