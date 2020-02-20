// Running the race

// Classes needed
#include<iostream>
#include<string>
using namespace std;

// Main Function
int main()
{
	// Variables
	string name1,
		   name2,
		   name3;
	double time1,
		   time2,
		   time3;
	
	// User input
	cout << "\nEnter in the 3 first names of the runners:\n";
	cin >> name1 >> name2 >> name3;
	
	cout << "\nEnter in their times in order of inputted names:\n";
	cin >> time1 >> time2 >> time3;
	
	if(time1 < 0 || time2 < 0 || time3 < 0)
	{
		cout << "\nCannot be a negative number..\n";
		cout << "\nRestart Program...\n";
		
		exit(0);
	}
	
	else if(time1 < time2 && time1 < time3)
	{
		if(time2 < time3)
		{
			// Display results
		cout << "\nFirst Place: " << name1;
		cout << "\nSecond Place: " << name2;
		cout << "\nThird Place: " << name3;
		}
		
		else if(time3 < time2)
		{
			// Display results
			cout << "\nFirst Place: " << name1;
			cout << "\nSecond Place: " << name3;
			cout << "\nThird Place: " << name2;
		}
		
	}

	else if(time2 < time1 && time2 < time3)
	{
		if(time1 < time3)
		{
			// Display results
			cout << "\nFirst Place: " << name2;
			cout << "\nSecond Place: " << name1;
			cout << "\nThird Place: " << name3;
		}
		
		else if(time3 < time1)
		{
			// Display results
			cout << "\nFirst Place: " << name2;
			cout << "\nSecond Place: " << name3;
			cout << "\nThird Place: " << name1;
		}
		
	}
	
	else if(time3 < time1 && time3 < time2)
	{
		if(time1 < time2)
		{
			// Display results
			cout << "\nFirst Place: " << name3;
			cout << "\nSecond Place: " << name1;
			cout << "\nThird Place: " << name2;
		}
		
		else if(time2 < time1)
		{
			// Display results
			cout << "\nFirst Place: " << name3;
			cout << "\nSecond Place: " << name2;
			cout << "\nThird Place: " << name1;
		}
	}
	
}
