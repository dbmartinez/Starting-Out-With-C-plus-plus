// How Many Widgets

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const double WIDGET_WEIGHT = 12.5;
	double pallet, widgets, totalWeight;
	
	// User input
	cout << "\nHow much does the empty pallet weigh(pounds): ";
	cin >> pallet;
	
	cout << "\nHow much does the pallet weigh (with widgets): ";
	cin >> widgets;
	
	// Calculations
	totalWeight = (widgets - pallet) / WIDGET_WEIGHT; 
	
	// Results
	cout << "\nThe total amount of widgets stacked on the pallet is: " ;
	cout << totalWeight;
	
	return 0;
}
