// Freezing and Boiling Points

// Classes needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double temperature;
	
	cout << "\nEnter in the temperature:\n";
	cin >> temperature;
	
	if(temperature > 676)
	{
		cout << "\nMercury's boiling point..'";
	}
	
	else if(temperature > 212 && temperature < 676)
	{
		cout << "\nWater's boiling point..'";
	}
	
	else if(temperature > 172 && temperature < 212)
	{
		cout << "\nEthyl Alcohol's boiling point..'";
	}
	
	else if(temperature > 32 && temperature < 172)
	{
		cout << "\nOxygen's boiling point..'";
	}
	
	else if(temperature < 32 && temperature > -38)
	{
		cout << "\nWater will freeze and Oxygen will boil..";
	}
	
	else if(temperature < -38 && temperature > -173)
	{
		cout << "\nMercury will freeze and Oxygen will boil..";
	}
	
	else if(temperature < -173 && temperature > -362)
	{
		cout << "\nEthyl Alcohol will freeze and Oxygen will boil..";
	}
	
	else if(temperature < -362)
	{
		cout << "\nOxygen will freeze anb boil..";
	}
	
	return 0;
}
