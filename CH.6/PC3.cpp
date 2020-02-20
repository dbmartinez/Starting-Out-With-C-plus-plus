// Falling Distance

#include<iostream>
#include<cmath>
using namespace std;

const double GRAVITY = 9.8;

double fallingDistance(int);

int main()
{
	double result;
	
	for(int time = 1; time <= 10; time++)
	{
		result = fallingDistance(time);
		cout << "\nDistance is " << result;
	}
	
	return 0;
}

double fallingDistance(int seconds)
{
	double result;
	
	result = (GRAVITY * seconds * seconds) / 2;
	
	return result;
}
