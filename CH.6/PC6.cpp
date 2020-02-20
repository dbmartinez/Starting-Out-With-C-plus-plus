// Shipping Charges

#include<iostream>
#include<string>
using namespace std;

const double RATESHIPPED1 = 3.10;
const double RATESHIPPED2 = 4.20;
const double RATESHIPPED3 = 5.30;
const double RATESHIPPED4 = 6.40;

double calculateCharge(double, int);

int main()
{
	int package, distance;
	double weight, shipCharge, totalShipCharge;
	
	cout << "\nHow many packages are being sent?\n";
	cout << "Enter: ";
	cin >> package;
	
	for(int i = 0; i < package; i++)
	{
		cout << "\nEnter in the weight of the package " << i + 1 << ": ";
		cin >> weight;

		cout << "\nEnter in the distance of the package " << i + 1 << ": ";
		cin >> distance;
		
		shipCharge = calculateCharge(weight, distance);
		totalShipCharge += shipCharge;
	}
	
	cout << "\nShipping Charge: $" << totalShipCharge;
}

double calculateCharge(double x, int y)
{
	double result;
	
	if(x <= 2)
	{
		result = (RATESHIPPED1 * (y / 500));
	}
	
	else if(x > 2 && x <= 6)
	{
		result = (RATESHIPPED2 * (y / 500));
	}
	
	else if(x > 6 && x <= 10)
	{
		result = (RATESHIPPED3 * (y / 500));
	}
	
	else
	{
		result = (RATESHIPPED4 * (y / 500));
	}
	
	return result;
}
