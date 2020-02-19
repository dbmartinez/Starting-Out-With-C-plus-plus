// Average Rainfall

// Libraries needed
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// Main function
int main()
{
	// Variables
	string month1, month2, month3;
	double month1Rain, month2Rain, month3Rain, averageRain;
	
	// Get user input for months
	cout << "\nEnter 3 months for average rainfall";
	cout << "\n-----------------------------------";
	cout << "\nEnter first month: ";
	cin >> month1;
	
	cout << "\nEnter second month: ";
	cin >> month2;
	
	cout << "\nEnter third month: ";
	cin >> month3;
	
	// Get user input for rainfall for each month
	cout << "\nEnter the average rainfall for all 3 months in inches";
	cout << "\n-----------------------------------------------------";
	cout << "\nEnter rainfall for " << month1 << ": ";
	cin >> month1Rain;
	
	cout << "\nEnter rainfall for " << month2 << ": ";
	cin >> month2Rain;
	
	cout << "\nEnter rainfall for " << month3 << ": ";
	cin >> month3Rain; 
	
	// Calculations
	averageRain = (month1Rain + month2Rain + month3Rain) / 3;
	
	// Results
	cout << fixed << showpoint << setprecision(2);
	cout << "\n\nThe average monthly rainfall for " << month1 << ", ";
	cout << month2 << ", and " << month3 << " was " << averageRain << " inches.";
	cout << endl;
	
	return 0;
}
