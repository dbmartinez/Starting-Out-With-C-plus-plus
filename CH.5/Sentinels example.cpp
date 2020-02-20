// CH.5 Sentinels

#include<iostream>
using namespace std;

int main()
{
	// Variables
	int testScores,
		total = 0,
		test = 0;
	
	//cout << "\nEnter score for test " << test << ":\n";
	//cin >> testScores;
	
	while(testScores != -99)
	{
		test++;
		total += testScores;
	
		cout << "\nEnter score for test " << test << ":\n";
		cin >> testScores;
	}
	
	test--;
	cout << "\nTotal scores added: " << test << endl;

	total /= test;
	cout << "\nAverage is: " << total << endl; 
	
	return 0;
}
