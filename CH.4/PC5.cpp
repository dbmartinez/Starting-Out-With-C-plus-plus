// Book Club Points

// Libraries needed
#include<iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	int books_Purcahsed;
		
	// User input
	cout << "\nEnter in the number of books purchased this month: ";
	cin >> books_Purcahsed;
	
	if(books_Purcahsed < 0)
	{
		cout << "\nCannot be a negative number, restart program...";
		exit(0);
	}
	
	// Switch statements
	switch(books_Purcahsed)
	{
		case 0:
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is zero";
			break;
		
		case 1:
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is 5";
			break;
		
		case 2:
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is 15";
			break;
		
		case 3:
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is 30";
			break;
			
		case 4:
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is 50";
			break;	
			
		default: 
			cout << "\nYou've purchased " << books_Purcahsed << " books, your";
			cout << " total points earned is 50";
	}
	
	return 0;
}
