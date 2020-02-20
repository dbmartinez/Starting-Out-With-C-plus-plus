// Distance Traveled

// Headers needed
#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	double speed,
		   travel,
		   distance;
	
	cout << "\nWhat is the speed of the vehicle in mph?:\n";
	cin >> speed;
	
	cout << "\nHow many hours has it traveled?:\n";
	cin >> travel;
	
	cout << "\nHour\t\tMiles Traveled\n";
	cout << "---------------------------------\n";
	
	for(int count = 1; count <= travel; count++)
	{
		distance += speed;
		cout << count << "\t\t\t" << distance << endl;
	}
	
	return 0;
}
