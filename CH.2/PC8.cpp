// Land Cancelation

// Libraries needed
#include<iostream>

using namespace std;

// Main function
int main()
{
	// Variables
	double acre = 43560,
		   meter = 10.7639,
		   halfAcre, result;
		   
	// Calculations
	halfAcre = 0.5 * acre;
	result = halfAcre / meter;
	
	// Information	   
	cout << "\nOne acre of land is the U.S. is " << acre;
	cout << "\nOne sqaure meter is " << meter;
	
	// Results
	cout << "\n\nHalf an acre of land is " << halfAcre;
	cout << "\nHalf an acre of land in squared meters is " << result;
	
	return 0;
}
