// Checkpoint 5.9

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
	int num;
	char again;
	
	cout << "\nEnter in a number and I will tell you if it's an ";
	cout << "even or odd number.";
	
	do
	{
		cout << "\nEnter in a Positive number:\n";
		cin >> num;
		
		if(num % 2 == 0)
		{
			cout << "\nNumber is even...";
		}
		
		else
		{
			cout << "\nNumber is odd...";
		}
		
		cout << "\n\nWould you like to repeat the program?\n";
		cin >> again;
		
	} while(toupper(again) == 'Y');
	
	return 0;
}
