// Fat Gram Calculator

// Classes needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main Function
int main()
{
	// Constant variable
	const int PERCENT = 30;
	
	// Variables
	double calories,
		   calories_from_Fat,
		   total_Calories,
		   percentage,
		   fat;
	
	// User input for calories
	cout << "\nEnter number of calories: ";
	cin >> calories;
	
	if(calories < 0)
	{
		cout << "\nCannot be a negative number, restart program...";
		exit(0);
	}
	
	// User input for fat grams
	cout << "\nEnter number of fat grams: ";
	cin >> fat;
	
	if(fat < 0 || fat > calories)
	{
		cout << "\nError cannot be less than zero or greater than calories, restart program...";
		exit(0);
	}
	
	// Calculations
	calories_from_Fat = fat * 9;
	percentage = calories_from_Fat / calories;
	percentage *= 100;
	
	if(percentage < PERCENT)
	{
		cout << "\nThis food is low on fat...";
	}
	
	else
	{
		cout << "\nThis food is high on fat...";
	}
	
	// Results
	cout << setprecision(4);
	cout << "\nThe percentage is " << percentage << "%\n";
	
	return 0;
}
