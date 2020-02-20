// Personal Best

// Classes Needed
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	string runnerOne, runnerTwo, runnerThree;
 	double timeOne, timeTwo, timeThree;

 	cout << "Enter the name of first runner: ";
 	getline(cin, runnerOne);
 
 	cout << "Enter time for first runner: ";
 	cin >> timeOne;

 	if(timeOne <= 0)
 	cout << "Only positive times are allowed!! \n\n";
	cin.ignore();
	
	cout << "\nEnter the name of second runner: ";
	getline(cin, runnerTwo);
	
	cout << "Enter time for second runner: ";
	cin >> timeTwo;
	
	if(timeTwo <= 0)
	cout << "Only positive times are allowed!! \n\n";
	cin.ignore();
	
	cout << "\nEnter the name of third runner: ";
	getline(cin, runnerThree);
	
	cout << "Enter time for third runner: ";
	cin >> timeThree;
	
	if(timeThree <= 0)
	cout << "Only positive times are allowed!! \n\n";
	
	cout << "\nResults\n\n";

	if(timeOne < timeTwo && timeOne < timeThree)
	{
		if(timeTwo < timeThree)
	 	{
	 		cout << "First place: " << runnerOne << endl
	 	 	<< "Second Place: " << runnerTwo << endl
	  		<< "Third Place: " << runnerThree << "\n\n";
	 	}
	 	
	 	if(timeThree < timeTwo)
	 	{
	 		cout << "First place: " << runnerOne << endl
	  		<< "Second Place: " << runnerThree << endl
	  		<< "Third Place: " << runnerTwo << "\n\n";
	 	}
	}
	
	if(timeTwo < timeOne && timeTwo < timeThree)
	{
		if(timeOne < timeThree)
		{
	 		cout << "First place: " << runnerTwo << endl
	  		<< "Second Place: " << runnerOne << endl
	  		<< "Third Place: " << runnerThree << "\n\n";
		}
	 
	 	if(timeThree < timeOne)
	 	{
	 		cout << "First place: " << runnerTwo << endl
	  		<< "Second Place: " << runnerThree << endl
	  		<< "Third Place: " << runnerOne << "\n\n";
	 	}
	}
	
	if(timeThree < timeOne && timeThree < timeTwo)
	{
		if(timeOne < timeTwo)
		{
			cout << "First place: " << runnerThree << endl
	  		<< "Second Place: " << runnerOne << endl
	  		<< "Third Place: " << runnerTwo << "\n\n";
		}
	 
		if(timeTwo < timeOne)
		{
			cout << "First place: " << runnerThree << endl
	  		<< "Second Place: " << runnerTwo << endl
	  		<< "Third Place: " << runnerOne << "\n\n";
		}
	}

 return 0;
}
