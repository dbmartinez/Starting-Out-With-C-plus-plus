// Widget.cpp class
#include "Widget.h"
#include<iostream>
using namespace std;

// constructor
Widget::Widget()
{
  widge = 0;
}

// setters
void Widget::setWidge(int w)
{
  widge = w;
}

// calc
int Widget::calc(int widge)
{
  int result;
  int workShift = 16;
  int widgetPerHour = 10;
  int maxWidget = 160;
  
  result = widge / widgetPerHour;
  result /= workShift;
 
  return result;
}

// display results
void Widget::print(int widget, int result)
{
  cout << "\nWidges you're ordering: " << widget;
    
  if(result == 0)
    {
      cout << "\nWe can have it ready today!!!";
      cout << endl << endl;
    }

  else
    {
      cout << "\nDays to complete:       " << result;
      cout << endl << endl;
    }
}
