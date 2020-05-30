// Savings Account Balance

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  double starting_balance, total_deposits, total_withdrawals;
  double total_interest, result, deposits, withdrawals;
  double new_air, air, month = 3, hundred = 100, monthly = 12;
  double monthly_interest;

  // user input for bank
  cout << "\nEnter in the starting balance: ";
  cin >> starting_balance;

  cout << "\nEnter in the annual interest rate(whole #): ";
  cin >> air;

  // change percent to decimal
  new_air = air / hundred;
  monthly_interest = new_air / monthly;

  // total deposits and withdrawals
  for(int i = 1; i <= month; i++)
    {
      cout << "\nEnter in the amount deposited for month " << i << ": ";
      cin >> deposits;

      while(deposits < 0)
	{
	  cout << "\nError... Please re-enter the amount deposited for month " << i << ": ";
	  cin >> deposits;
	}

      cout << "Enter in the amount that was withdrawn for month " << i << ": ";
      cin >> withdrawals;

      while(withdrawals < 0 || withdrawals > (total_deposits + starting_balance))
	{
          cout << "\nError... Please re-enter the amount withdrawn for month " << i << ": ";
          cin >> withdrawals;
	}

      // calculations
      total_deposits += deposits; 
      total_withdrawals += withdrawals;
      total_interest = monthly_interest * ((starting_balance + total_deposits) / 2);
    }
  
  // calculations
  result = total_interest + total_deposits + starting_balance - total_withdrawals;

  // display info
  cout << fixed << showpoint << setprecision(2);
  cout << "\nYour Account Information";
  cout << "\n------------------------";
  cout << "\nStarting Balance:  $" << starting_balance;
  cout << "\nTotal Deposits:    $" << total_deposits;
  cout << "\nTotal Withdrawals: $" << total_withdrawals;
  cout << "\nTotal Interest:    $" << total_interest;
  cout << "\nFinal Balance:     $" << result;
  cout << endl << endl;

  return 0;
}
