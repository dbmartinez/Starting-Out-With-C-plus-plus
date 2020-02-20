// Color Mixer

// Classes needed
#include<iostream>
#include<string>
using namespace std;

// Main Function
int main()
{
	// Variables
	string color1, 
		   color2;
	string primary1 = "red";
	string primary2 = "blue";
	string primary3 = "yellow";
	
	// Title
	cout << "\t\t\tColor Mixed\n";
	cout << "\t\t\t-----------\n\n";
	
	// Information
	cout << "Enter in two primary colors, red, blue and yellow.\n";
	cout << "I will tell you the outcome of the mix..\n";
	
	// User input 1
	cout << "\nEnter in two primary colors: ";
	cin >> color1 >> color2;
	
	// Outcomes of color mix
	if(color1 == primary1 && color2 == primary2 || color1 == primary2 && color2 == primary1)
	{
		cout << "\nYou get purple...\n\n";
	}
	
	else if(color1 == primary1 && color2 == primary3 || color1 == primary3 && color2 == primary1)
	{
		cout << "\nYou get orange...\n\n";
	}
	
	else if(color1 == primary2 && color2 == primary3 || color1 == primary3 && color2 == primary2)
	{
		cout << "\nYou get green...\n\n";
	}
	
	else
	{
		cout << "\n\nNeed to enter in primary colors\n";
		cout << "Restart Program...\n";
	}
	
}
