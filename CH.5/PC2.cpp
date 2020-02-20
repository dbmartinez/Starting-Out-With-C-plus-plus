// Sum of Numbers

// Headers needed
#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	int num,
		total;
	
	// User input
	cout << "\nEnter in a positive number:\n";
	cin >> num;
	
	// Validate user input
	while(num < 1)
	{
		cout << "\nError...";
		cout << "\nRe-Enter a positive number:\n";
		cin >> num;
	}
	
	// iterate the sum of all numbers
	for(int count = 1; count <= num; count++)
	{
		//cout << " " << count << endl;
		total += count;
	}
	
	cout << "\nThe sum is: " << total << endl;
	
	return 0;
}
