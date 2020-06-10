// Stock Profit

#include<iostream>
#include<iomanip>
using namespace std;

double stockProfit(double, double, double, double, int);

int main()
{
  double result, pricePerShare, purchaseCommission, saleCommission, salePerShare;  
  int numOfShares;

  // user input
  cout << fixed << showpoint << setprecision(2);
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
  result = stockProfit(pricePerShare, purchaseCommission, saleCommission, salePerShare, numOfShares);

  // final resultsy
  cout << "\nResults";
  cout << "\n-------";
  cout << "\nNumber of Shares:          " << numOfShares;
  cout << "\nPurchase Price Per Share: $" << pricePerShare;
  cout << "\nPurchase Commission Paid: $" << purchaseCommission;
  cout << "\nSale Commission Paid:     $" << saleCommission;
  cout << "\nSale Price Per Share:     $" << salePerShare;
  cout << "\nResult:                   $" << result << endl;

  // check to see if results are profitable or not
  if(result > 0)
    cout << "\nAmount of profit made: $" << result << endl;

  else if(result == 0)
    cout << "\nYou didn't gain or loss any money..." << endl;

  else
    cout << "\nAmount of profit lost: $" << result << endl;
  
  return 0;
}

// calculation of profit
double stockProfit(double pricePerShare, double purchaseCommission, double saleCommission, double salePerShare, int numOfShares)
{
  double profit;

  profit = ((numOfShares * salePerShare) - saleCommission) - ((numOfShares * pricePerShare) + purchaseCommission);

  return profit;
}
