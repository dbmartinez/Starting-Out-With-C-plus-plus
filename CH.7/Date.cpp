// Date.cpp file
#include "Date.h"
#include<iostream>
#include<string>
using namespace std;

// default constructor
Date::Date()
{
  // set to default
  month = 1;
  day = 1;
  year = 2001;
}

// overloaded constructor
Date::Date(int m, int d, int y)
{
  month = m;
  day = d;
  year = y;
}

// setter functions
void Date::setMonth(int m)
{
  month = m;

  while(month < 0 || month > 12)
    {
      cout << "\nError: must be between 1 and 12";
      cout << "\nEnter in month: ";
      cin >> month;
    }
}

void Date::setDay(int d)
{
  day = d;

  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
      while(day < 0 || day > 31)
	{
	  cout << "\nError: must be between 1 and 31";
	  cout << "\nEnter in day: ";
	  cin >> day;
	}
    }

  if(month == 2)
    {
      while(day < 0 || day > 29)
        {
          cout << "\nError: must be between 1 and 29";
          cout << "\nEnter in day: ";
          cin >> day;
        }
    }

  if(month == 4 || month == 6 || month == 9 || month == 11)
    {
      while(day < 0 || day > 30)
        {
          cout << "\nError: must be between 1 and 30";
          cout << "\nEnter in day: ";
          cin >> day;
        }
    }
}

void Date::setYear(int y)
{
  year = y;

  while(year <= 2000)
    {
      cout << "\nError: must be greater then the year 2000";
      cout << "\nEnter in year: ";
      cin >> year;
    }
}

// getter functions
int Date::getMonth()
{
  return month;
}

int Date::getDay()
{
  return day;
}

int Date::getYear()
{
  return year;
}

// print results
void Date::print()
{
  string newMonth;
  int newYear, newDay;
  
  if(month == 1)
    newMonth = "January";

  else if(month == 2)
    newMonth = "February";

  else if(month == 3)
    newMonth = "March";

  else if(month == 4)
    newMonth = "April";

  else if(month == 5)
    newMonth = "May";

  else if(month == 6)
    newMonth = "June";

  else if(month == 7)
    newMonth = "July";

  else if(month == 8)
    newMonth = "August";

  else if(month == 9)
    newMonth = "September";

  else if(month == 10)
    newMonth = "October";

  else if(month == 11)
    newMonth = "November";

  else
    newMonth = "December";

  newYear = year - 2000;

  cout << "\n\nDate Results";
  cout << "\n------------\n";
  cout << month << "/" << day << "/" << newYear << endl;
  cout << newMonth << " " << day << ", " << year << endl;
  cout << day << " " << newMonth << " " << year << endl; 
  cout << endl;
}
