// Order Status

#include<iostream>
#include<iomanip>
#include<cctype>
#include<string>
using namespace std;

// global variable
const int COPPERWIRE_SPOOL = 100;

// function prototype
void getInput();
void calc(int&, int&, double shipping = 10.00);

int main()
{
  char choice;
  
  cout << fixed << showpoint << setprecision(2);
  
  do
    {
      // call getInput
      getInput();

      cout << "\nWould you like to restart program?";
      cout << "\nY for yes and any other key to exit: ";
      cin >> choice;

    }while(toupper(choice) == 'Y');

  return 0;
}

// get user input
void getInput()
{
  // variables
  char choice;
  int spoolOrdered, spoolStock;
  double shipping;
  
  cout << "\nEnter in the number of spools ordered: ";
  cin >> spoolOrdered;

  while(spoolOrdered < 0)
    {
      cout << "\nError: cannot be a negative number.";
      cout << "\nRe-enter in the number of spools ordered: ";
      cin >> spoolOrdered;
    }

  cout << "Enter in the number of spools in stock: ";
  cin >> spoolStock;

  while(spoolStock < 0)
    {
      cout << "\nError: cannot be a negative number.";
      cout << "\nRe-enter in the number of spools in stock: ";
      cin >> spoolStock;
    }
  
  cout << "\nStandard shipping and handling charge is $10.";
  cout << "\nAny shipping and handling charge greater than $10?";
  cout << "\n(y for yes, n for no): ";
  cin >> choice;

  if(tolower(choice) == 'n')
    calc(spoolOrdered, spoolStock);

  else if(tolower(choice) == 'y')
    {
      cout << "Any shipping and handing charge more than $10?";
      cout << "\nEnter in the shipping and handling charge: ";
      cin >> shipping;

      while(shipping < 0)
	{
	  cout << "\nError: cannot be a negative number.";
	  cout << "\nRe-enter in the shipping and handling charge: ";
	  cin >> shipping;
	}

      calc(spoolOrdered, spoolStock, shipping);
    }
}

// display results
void calc(int &spoolOrdered, int &spoolStock, double shipping)
{
  int backOrder;
  double total, newShipping;
  
  // final results
  cout << "\nSpools Ordered:       " << spoolOrdered;
  cout << "\nSpools in Stock:      " << spoolStock;

  // check if any spools are in backorder
  if(spoolStock < spoolOrdered)
    {
      // calculations
      newShipping = shipping * spoolOrdered;
      total = COPPERWIRE_SPOOL * spoolStock + newShipping;
      backOrder = spoolOrdered - spoolStock;
      cout << "\nSpools on Back Order: " << backOrder;
      cout << "\nShipping Charge:     $" << newShipping;
      cout << "\nTotal:               $" << total;
      cout << endl << endl;
    }    

  else if(spoolStock > spoolOrdered)
    { 
      // calculations
      newShipping = shipping * spoolOrdered;
      total = COPPERWIRE_SPOOL * spoolOrdered + newShipping;
      
      cout << "\nShipping Charge:     $" << newShipping;
      cout << "\nTotal:               $" << total;
      cout << endl << endl;
    }
}
