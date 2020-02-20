// Minimum/Maximum

#include<iostream>

using namespace std;

int main()
{
	int x, y;
	
	cout << "\nEnter in two numbers and I will tell you if one is\n";
	cout << "larger than the other..\n\n";
	
	cout << "Enter in two numbers: \n";
	cin >> x >> y;
	cout << endl;
	
	if(x > y)
	{
		cout << x << " is larger then " << y << endl;
		cout << y << " is smaller than " << x;
	}
	
	else if(y > x)
	{
		cout << y << " is larger than " << x << endl;
		cout << x << " is smaller than " << y;
	}
	
	else
	{
		exit(0);
	}
	
	return 0;
}
