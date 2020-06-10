// Future Value

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double futureValue(double, double, int);

int main()
{
  int months;
  double interest_rate, new_interest_rate, present_value, future_value;

  cout << fixed << showpoint << setprecision(2);
  cout << "\nEnter in the present value(Cannot be less than 0): ";
  cin >> present_value;

  while(present_value < 0)
    {
      cout << "\nError: Cannot be less than 0";
      cout << "\nRe-enter in the present value: ";
      cin >> present_value;
    }

  cout << "Enter in the annual interest rate(whole number, dont exceed over 22%): ";
  cin >> interest_rate;
  new_interest_rate = interest_rate / 100;

  while(interest_rate < 0 || interest_rate > 22)
    {
      cout << "\nError: Cannot exceed 22";
      cout << "\nRe-enter in the annual interest rate(whole number): ";
      cin >> interest_rate;
      new_interest_rate = interest_rate / 100;
    }

  cout << "Enter in the amount of months: ";
  cin >> months;

  while(months < 0)
    {
      cout << "\nError: Cannot be less than 0";
      cout << "\nRe-enter in the amount of months: ";
      cin >> months;
    }

  future_value = futureValue(present_value, new_interest_rate, months);

  cout << "\nResults";
  cout << "\n-------";
  cout << "\nFuture Value: $" << future_value;
  cout << "\nAnnual Interest Rate: " << interest_rate;
  cout << "%";
  cout << "\nAmount of Months: " << months;
  cout << "\nPresent Value: $" << present_value;
  cout << endl << endl;
  
  return 0;
}

//
double futureValue(double present_value, double new_interest_rate, int months)
{
  double future_value;

  future_value = present_value * pow(1 + new_interest_rate, months);

  return future_value;
}
