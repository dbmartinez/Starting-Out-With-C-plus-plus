// Roman Numeral Converter

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	int input;
	
	// User input
	cout << "Enter in a number between 1 - 10: ";
	cin >> input;
	
	// If less than 0 or greater than 10, exit program
	if(input < 1 || input > 10)
	{
		cout << "\nInvalid input....\n";
		exit(0);	
	}
	
	// Switch statement
	switch(input)
	{
		case 1: 
			cout << "\nRoman numeral of " << input << ": I";
			break;
		
		case 2:
			cout << "\nRoman numeral of " << input << ": II";
			break;
			
		case 3:
			cout << "\nRoman numeral of " << input << ": III";
			break;
			
		case 4:
			cout << "\nRoman numeral of " << input << ": IV";
			break;
					 
		case 5:
			cout << "\nRoman numeral of " << input << ": V";
			break;
			
		case 6:
			cout << "\nRoman numeral of " << input << ": VI";
			break;	
			
		case 7:
			cout << "\nRoman numeral of " << input << ": VII";
			break;
			
		case 8:
			cout << "\nRoman numeral of " << input << ": VIII";
			break;	
		
		case 9:
			cout << "\nRoman numeral of " << input << ": IX";
			break;
		
		case 10:
			cout << "\nRoman numeral of " << input << ": X";
			break;		
	}
	
	return 0;
}
