// Celsius Temperature Table

#include<iostream>
#include<iomanip>
using namespace std;

// Function Prototype
double celsius(double);

int main()
{
	double newCelsius, 
		   userInput;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "\nEnter in Fahreneit and I will convert it to celsius.";

	for(int x = 0; x <= 20; x++)
	{
		newCelsius = celsius(x);
	
		cout << "\nCelsius " << x << " is " << newCelsius << " degress.";	
	}
	
	return 0;
}

// Function 
double celsius(double fahrenheit)
{
	double result;
	
	result = (5*(fahrenheit - 32)/9);
	
	return result;
}
