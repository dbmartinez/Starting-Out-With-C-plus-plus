// Speed Conversion Chart

#include<iostream>
using namespace std;

int main()
{
	int MPH;
	
	cout << "KPH  MPH\n";
	cout << "--------\n";	

	for(int KPH = 40; KPH <= 120; KPH += 10)
	{
		MPH = KPH * 0.6214;
		
		cout << KPH << "   " << MPH << endl;
	}
	
	return 0;
}
