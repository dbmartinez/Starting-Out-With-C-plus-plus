// Batting Average

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	double upAtBat, earnedRuns, battingAverage; 
	
	// Display prompt
	cout << "\nHow many times were you at bat: ";
	cin >> upAtBat;
	
	cout << "\nHow many earned runs were hit: ";
	cin >> earnedRuns;	
	
	// Calculations
	battingAverage = earnedRuns / upAtBat;
	
	// Results
	cout << fixed << showpoint << setprecision(3);
	cout << "\nYour batting average is " << battingAverage;
	
	return 0;
}
