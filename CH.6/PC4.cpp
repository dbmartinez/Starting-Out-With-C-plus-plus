// Kinetic Energy

#include<iostream>
using namespace std;

double kineticEnergy(double, double);

int main()
{
	double result,
		   mass,
		   speed;
	
	cout << "\nEnter in mass(kilograms): ";
	cin >> mass;
	
	cout << "\nEnter in velocity: ";
	cin >> speed;
	
	result = kineticEnergy(mass, speed);
	
	cout << "\nKintetic Energy is " << result << " Joules.";
	
	return 0;
}

double kineticEnergy(double kiloGrams, double velocity)
{
	double result;
	
	result = (kiloGrams * velocity * velocity) / 2;
	
	return result;
}
