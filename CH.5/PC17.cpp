// Population

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int organism, days_multiply;
  double daily_increase, percent, result, almostThere;

  cout << "\nEnter in the starting number of organisms: ";
  cin >> organism;

  while(organism < 2)
    {
      cout << "\nError: Please re-enter starting number of organisms: ";
      cin >> organism;
    }

  cout << "\nEnter in the average(percentage) population increase: ";
  cin >> daily_increase;

  cout << "\nEnter in the number of days they'll multiply: ";
  cin >> days_multiply;

  // calculations
  percent = daily_increase / 100;
  almostThere = (organism * percent);
  result = almostThere + organism;

  // display information
  cout << "\nSize of Population";
  cout << "\n------------------\n";
  for(int i = 0; i < days_multiply; i++)
    {
      cout << "Day " << i+1 << ": " << result;
      cout << endl;
      result += almostThere;
    }
  
  return 0;
}
