// Multiple Stock Sales

#include<iostream>
#include<iomanip>
using namespace std;

// function prototypes
void userInput();
double stockProfit(double, double, double, double, int);
double profitWinOrLoss(double);

int main()
{
  userInput();

  return 0;
}

// get users input
void userInput()
{
  // variables
  double result, pricePerShare, purchaseCommission, saleCommission, salePerShare;
  int numOfShares, stockSales;

  // user input for amount of stock sales
  cout << "\nEnter in the the number of stock sales: ";
  cin >> stockSales;

  for(int i = 1; i <= stockSales; i++)
    {
      // user input
      cout << fixed << showpoint << setprecision(2);
      cout << "\nSales information for stock #" << i;
      cout << "\n------------------------------";
      cout << "\nEnter in the Price per Share: ";
      cin >> pricePerShare;
  
      cout << "Enter in the Purchase Commission: ";
      cin >> purchaseCommission;

      cout << "Enter in the Sales Commission: ";
      cin >> saleCommission;
      
      cout << "Enter in the Sale per Share: ";
      cin >> salePerShare;
      
      cout << "Enter in the number of Shares: ";
      cin >> numOfShares;
      
      // call stockPorfit and pass necessary variables for calculation
      result += stockProfit(pricePerShare, purchaseCommission, saleCommission, salePerShare, numOfShares);
    }

  profitWinOrLoss(result);
}

// calculation of profit                                                           
double stockProfit(double pricePerShare, double purchaseCommission, double saleCommission, double salePerShare, int numOfShares)
{
  double profit;

  profit = ((numOfShares * salePerShare) - saleCommission) - ((numOfShares * pricePerShare) + purchaseCommission);

  return profit;
}

// check to see if profits or good or not
double profitWinOrLoss(double result)
{
  // check to see if results are profitable or not
  if(result > 0)
    cout << "\nAmount of profit made: $" << result << endl;

  else if(result == 0)
    cout << "\nYou didn't gain or loss any money..." << endl;

  else
    cout << "\nAmount of profit lost: $" << result << endl;
}
