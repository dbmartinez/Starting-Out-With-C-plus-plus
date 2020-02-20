// Random Number Guessing Game

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cctype>
using namespace std;

int main()
{
	int num,
		number;
	char repeat = 'y';
	unsigned seed;
	
	do
	{
		seed = time(0);
		srand(seed);
		number = rand() % 100 + 1;
		cout << number;
		
		cout << "\nPick a number between 1 - 100: ";
		cin >> num;
		
		while(number)
		{
			if(num < number)
			{
				cout << "\nToo low. Try again.";
				cout << "\nPick a number between 1 - 100: ";
				cin >> num;
			}	
			
			else if(num > number)
			{
				cout << "\nToo high. Try again.";
				cout << "\nPick a number between 1 - 100: ";
				cin >> num;
			}
			
			else
			{
				cout << "\nCongratulations. You figured out my number.\n";
				break;
			}	
		}
	
		cout << "\nWould you like to play again?(y/n): ";
		cin >> repeat;
		
	} while(toupper(repeat) == 'Y');
	
	return 0;
}
