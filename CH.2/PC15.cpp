// Stock loss

// Libraries needed
#include<iostream>

using namespace std;

int main()
{
	// Variables
	double shares = 750,
		   originalPrice = 35,
		   newPrice = 31.15,
		   paid, received, lost;
		   
		   
	// Calculations
	paid = shares * originalPrice;
	received = shares * newPrice;
	lost = paid - received;
	
	// Results
	cout << "\n\nTotal amount paid for the stock: $" << paid;
	cout << "\nTotal amount recieved from selling stock: $" << received;
	cout << "\nTotal amount of money lost: $" << lost;
	
	return 0;
}
