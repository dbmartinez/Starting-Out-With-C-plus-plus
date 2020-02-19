// Distance per Tank of Gas

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string miles = " miles";
	double gallon = 20,
		   milesPerGallonTown = 23.5,
		   milesPerGallonHighway = 28.9,
		   totalTown, totalHighway;
		  		   
	totalTown = milesPerGallonTown * gallon;
	totalHighway = milesPerGallonHighway * gallon;
	
	cout << "\nTotal can drive in town is " << totalTown << miles;
	cout << "\nTotal can drive in highawy is " << totalHighway << miles;
	
	return 0;
}
