// The Greatest and Least of These

#include<iostream>
using namespace std;

int main()
{
	
	// Variables
	int userInput,
		total = 0,
		number = 1,
		largeNum,
		smallNum;
	
	cout << "\nEnter a number " << number << ":\n";
	cin >> userInput;
	
	largeNum = smallNum = userInput;
	
	while(userInput != -99)
	{
		if(userInput > largeNum)
		{
			largeNum = userInput;
		}	
		
		else if(userInput < smallNum)
		{
			smallNum = userInput;
		}

		number++;
		
		cout << "\nEnter a number " << number << ":\n";
		cin >> userInput;
	}
	
	cout << "\nLargest number: " << largeNum;
	cout << "\nSmallest number: " << smallNum; 
	
	return 0;
}
