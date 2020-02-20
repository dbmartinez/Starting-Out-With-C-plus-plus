// Math Tutor Version 2

//Libraries included
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

// Main function
int main()
{
	// Variable
	int answer, 
		number1, 
		number2, 
		right_Answer;
	
	srand(time(0));
	number1 = (rand() % (50 - 10 + 1) + 10);
	number2 = (rand() % (50 - 10 + 1) + 10);

	// Display info
	cout << endl << endl;
	cout << " " << number1 << endl;
	cout << "+" << number2 << endl;
	cout << "__" << endl; 
	
	
	// User enters their answer
	cout << "\nPlease enter your answer: ";
	cin >> answer;
	
	// Calculations
	right_Answer = number1 + number2;
	
	if(answer == right_Answer)
	{
		cout << "\nCongratulations...You got the right answer!!";
	}
	
	else if(answer != right_Answer)
	{
		cout << "\nBetter luck next time, the correct answer is " << right_Answer;
	}

	return 0;
}
