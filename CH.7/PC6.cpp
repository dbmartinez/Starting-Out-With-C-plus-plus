// Gratuity
#include "Gratuity.h"
#include<iostream>
#include<cctype>
using namespace std;

// function prototype
double lessThanZero(double);

int main()
{
  char repeat;
  double tip, bill, tax;

  do
    {
      cout << "\nEnter the restuarant bill: ";
      cin >> bill;
      bill = lessThanZero(bill);
      
      cout << "Enter the tip amount: ";
      cin >> tip;
      tip = lessThanZero(tip);

      cout << "Enter in the tax amount: ";
      cin >> tax;
      tax = lessThanZero(tax);
     
      Gratuity g(tax);
      g.computeTip(bill, tip);

      // repeat program
      cout << "\nRepeat program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes or n for no";
	  cout << "\nRe-enter choice: ";
	  cin >> repeat;
	}

      if(toupper(repeat) == 'N')
	cout << "\nHave a good day..." << endl << endl;

    }while(toupper(repeat) == 'Y');

  return 0;
}

// check to see of user enters a negative number
double lessThanZero(double tip)
{
  while(tip < 0)
    {
      cout << "\nError: Cannot be a negative number";
      cout << "\nRe-enter amount: ";
      cin >> tip;
    }

  return tip;
}
