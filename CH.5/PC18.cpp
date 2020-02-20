//  Math Tutor Version 3

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
		right_Answer,
		choice;
	
	srand(time(0));
	number1 = (rand() % (50 - 10 + 1) + 10);
	number2 = (rand() % (50 - 10 + 1) + 10);
	
	// Menu
	cout << "\nChoose option below.";
	cout << "\n1. Addition";
	cout << "\n2. Subtraction";
	cout << "\n3. Multiplication";
	cout << "\n4. Quit\n";
	cin >> choice;
	
	while(choice != 4)
	{
		if(choice == 1)
		{
			// Display info
			cout << endl << endl;
			cout << " " << number1 << endl;
			cout << "+" << number2 << endl;
			cout << "___" << endl; 

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
			
			// Menu
			cout << "\n\nChoose option below.";
			cout << "\n1. Addition";
			cout << "\n2. Subtraction";
			cout << "\n3. Multiplication";
			cout << "\n4. Quit\n";
			cin >> choice;
		}
		
		else if(choice == 2)
		{
			// Display info
			cout << endl << endl;
			cout << " " << number1 << endl;
			cout << "-" << number2 << endl;
			cout << "___" << endl; 
			
			// User enters their answer
			cout << "\nPlease enter your answer: ";
			cin >> answer;
			
			// Calculations
			right_Answer = number1 - number2;
			
			if(answer == right_Answer)
			{
				cout << "\nCongratulations...You got the right answer!!";
			}
			
			else if(answer != right_Answer)
			{
				cout << "\nBetter luck next time, the correct answer is " << right_Answer;
			}
			
			// Menu
			cout << "\n\nChoose option below.";
			cout << "\n1. Addition";
			cout << "\n2. Subtraction";
			cout << "\n3. Multiplication";
			cout << "\n4. Quit\n";
			cin >> choice;
		}
		
		else
		{
			// Display info
			cout << endl << endl;
			cout << " " << number1 << endl;
			cout << "*" << number2 << endl;
			cout << "___" << endl; 
	
			// User enters their answer
			cout << "\nPlease enter your answer: ";
			cin >> answer;
			
			// Calculations
			right_Answer = number1 * number2;
			
			if(answer == right_Answer)
			{
				cout << "\nCongratulations...You got the right answer!!";
			}
			
			else if(answer != right_Answer)
			{
				cout << "\nBetter luck next time, the correct answer is " << right_Answer;
			}
			
			// Menu
			cout << "\n\nChoose option below.";
			cout << "\n1. Addition";
			cout << "\n2. Subtraction";
			cout << "\n3. Multiplication";
			cout << "\n4. Quit\n";
			cin >> choice;
		}
		
	}
	
	return 0;
}
