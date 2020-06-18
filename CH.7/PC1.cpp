// Date

#include<iostream>
#include "Date.h"
using namespace std;

int main()
{
  Date date;
  int month, day, year;

  cout << "\nEnter in whole numbers(ex. 3/15/2016)";
  cout << "\nEnter in month: ";
  cin >> month;
  date.setMonth(month);

  cout << "Enter in day: ";
  cin >> day;
  date.setDay(day);

  cout << "Enter in year: ";
  cin >> year;
  date.setYear(year);

  date.print();

  return 0;
}
