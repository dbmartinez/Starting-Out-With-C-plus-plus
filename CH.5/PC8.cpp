// Pennies for Pay

#include<iostream>
#include<cctype>
#include<iomanip>
using namespace std;

int main()
{
	char again;
	int month,
		penny;
	double total = 0.0;
	
	do
	{
		cout << "\nEnter in the days worked this month(1-31): ";
		cin >> month;
		
		while(month < 0 || month > 31)
		{
			cout << "\nPlease re-enter in the days worked this month: ";
			cin >> month;
		}
	
		cout << "\nMonthly Sales\n";
		cout << "Day\tSalary\n";
		cout << "--------------\n";
	
		for(int day = 1, penny = 1; day <= month; day++, penny *= 2)
		{
			cout << fixed << showpoint << setprecision(2);
			total = total + penny;
			cout << day << "\t$" << static_cast<double>(penny) << endl;
		}	
		
		cout << "\nThe total is $" << total << " for " << month << " days.";
		
		cout << "\nRepeat program?: ";
		cin >> again;
		
	} while(toupper(again) == 'Y');
	
	
	return 0;
}
