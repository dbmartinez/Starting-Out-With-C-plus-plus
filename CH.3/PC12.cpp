// How Many Calories

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const int BAG_OF_COOKIES = 30;
	const int SERVING = 10;
	const int CALORIES = 240;
	int cookiesEaten, calories, totalCalories;
	
	// User input
	cout << "\nHow many cookies did you eat: ";
	cin >> cookiesEaten;
	
	// Calculations
	calories = (CALORIES * SERVING) / BAG_OF_COOKIES;
	totalCalories = calories * cookiesEaten;
	
	// Results
	cout << "\nYou ate a total of " << totalCalories << " calories.";
	
	return 0;
}
