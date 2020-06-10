// Present Value

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double presentValue(double, double, int);

int main()
{
  int future_value, years;
  double interest_rate, new_interest_rate, present_value;

  cout << fixed << showpoint << setprecision(2);
  cout << "\nEnter in the future value(Cannot exceed $10,000): ";
  cin >> future_value;

  while(future_value < 0 || future_value > 10000)
    {
      cout << "\nError: Cannot exceed $10,000";
      cout << "\nRe-enter in the future value: ";
      cin >> future_value;
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

  cout << "Enter in the year: ";
  cin >> years;

  present_value = presentValue(future_value, new_interest_rate, years);

  cout << "\nResults";
  cout << "\n-------";
  cout << "\nFuture Value: $" << future_value;
  cout << "\nAnnual Interest Rate: " << interest_rate;
  cout << "%";
  cout << "\nAmount of Years: " << years;
  cout << "\nPresent Value: $" << present_value;
  cout << endl << endl;
  
  return 0;
}

// function for calculation
double presentValue(double future_value, double new_interest_rate, int years)
{
  double present_value;

  present_value = future_value / pow(1 + new_interest_rate, years);

  return present_value;
}
