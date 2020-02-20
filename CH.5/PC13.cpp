// Random Number Guessing Game Enhancement

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cctype>
using namespace std;

int main()
{
	int num,
		number,
		count = 0;
	char repeat = 'y';
	unsigned seed;

	seed = time(0);
	srand(seed);
	number = rand() % 100 + 1;
		
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
			cout << "\nCongratulations. You figured out my number (" << number << ").\n";
			cout << "You made " << count << " guesses.\n";
			break;
		}
		count++;	
	}
	
	return 0;
}
