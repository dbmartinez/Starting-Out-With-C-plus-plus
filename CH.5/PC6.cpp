// Ocean Levels

#include<iostream>
using namespace std;

int main()
{
	double total = 0,
			milli = 3.1;
	
	cout << "Ocean Levels rising 3.1 millimeters every year\n";
	cout << "Year\tRaise Level\n";
	cout << "--------------------\n";
	
	for(int num = 1; num <= 25; num++)
	{
		total += milli;
		cout << num << "\t" << total << endl;
	}
	
	return 0;
}
