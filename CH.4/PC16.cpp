// Body Mass Index

// Classes needed
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

// Main Function
int main()
{
	// Variables
	double height,
		   weight,
		   BMI;
	
	// User enters in weight
	cout << "\nEnter in your weight:\n";
	cin >> weight;
	
	// User enters in height
	cout << "\nEnter in your height:\n";
	cin >> height;
	
	// Calculations
	BMI = weight * (703 / pow(height, 2.0));
	
	if(BMI > 18.5 && BMI < 25)
	{
		cout << setprecision(4);
		cout << "\nYour BMI is " << BMI << ", your weight is optimal.\n";
	}
	
	else if(BMI < 18.5)
	{
		cout << setprecision(4);
		cout << "\nYour BMI is " << BMI << ", you're underweight.\n";
	}
	
	else
	{
		cout << setprecision(4);
		cout << "\nYour BMI is " << BMI << ", you're overweight.\n";
	}
	
	return 0;
}
