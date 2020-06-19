// Inventory class
#include "Inventory.h"
#include<iostream>
#include<iomanip>
#include<locale>
#include<cctype>
using namespace std;

// function prototype
int lessThanZero(int);
double lessThanZero(double);
void results(Inventory);

int main()
{
  char repeat;
  int item, amount;
  double price;
  Inventory I;

  do
    {
      cout << "\nEnter in the item number: ";
      cin >> item;
      item = lessThanZero(item);
      I.setItemNumber(item);

      cout << "Enter in the quantity: ";
      cin >> amount;
      amount = lessThanZero(amount);
      I.setQuantity(amount);

      cout << "Enter in the cost: ";
      cin >> price;
      price = lessThanZero(price);
      I.setCost(price);
     
      results(I);

      cout << "\nRepeat Program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes and n for no...";
	  cout << "\nRe-enter choice: ";
	  cin >> repeat;
	}

      if(toupper(repeat) == 'N')
	cout << "\nHave a great day..." << endl << endl;

    }while(toupper(repeat) == 'Y');

  return 0;
}

// checks to see of user enters wrong number
int lessThanZero(int temp)
{
  while(temp < 0)
    {
      cout << "\nError: Cannot be less than zero...";
      cout << "\nRe-enter data: ";
      cin >> temp;
    }

  return temp;
}

// checks to see of user enters wrong number
double lessThanZero(double temp)
{
  while(temp < 0)
    {
      cout << "\nError: Cannot be less than zero...";
      cout << "\nRe-enter data: ";
      cin >> temp;
    }

  return temp;
}

// results
void results(Inventory I)
{
  cout << fixed << showpoint << setprecision(2);
  cout << "\nItem Number: " << I.getItemNumber();
  cout.imbue(locale("en_US"));
  cout << "\nQuantity:    " << I.getQuantity();
  cout << "\nCost:       $" << I.getCost();
  cout << "\nTotal Cost: $" << I.getTotalCost();
  cout << endl << endl;
}
