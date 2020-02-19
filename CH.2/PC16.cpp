// Energy Drink Consumption

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double customers = 16500,
		   moreEnergy = .15,
		   citrus = .52,
		   totalEnergy, totalCitrus;
		   
	// Information
	cout << "\nTotal Customers: " << customers;
	cout << "\nCustomers who drink one or more energy drinks: ";
	cout << moreEnergy * 100 << "%";
	cout << "\nCustomers who choose a citrus flavored drinks: ";
	cout << citrus * 100 << "%";
		   
	// Calculations
	totalEnergy = customers * moreEnergy;
	totalCitrus = totalEnergy * citrus;		   
		   
	// Results
	cout << "\n\nCustomers who purchased one or more"; 
	cout << " energy drinks: " << totalEnergy;
	cout << "\nCustomers who purchased citrus flavored"; 
	cout << " energy drinks: " << totalCitrus;
	
	return 0;
}
