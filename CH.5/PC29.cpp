// Using Files - Savings Account Balance Modification

#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;

int main()
{
  ofstream fout;
  fout.open("PC29.txt");

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

  cout << "\nWriting to file...";

  // display info
  fout << fixed << showpoint << setprecision(2);  
  fout << "\nYour Account Information";
  fout << "\n------------------------";
  fout << "\nStarting Balance:  $" << starting_balance;
  fout << "\nTotal Deposits:    $" << total_deposits;
  fout << "\nTotal Withdrawals: $" << total_withdrawals;
  fout << "\nTotal Interest:    $" << total_interest;
  fout << "\nFinal Balance:     $" << result;
  fout << endl << endl;

  fout.close();
  return 0;
}
