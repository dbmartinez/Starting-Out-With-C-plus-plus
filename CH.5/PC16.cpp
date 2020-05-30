// Rate of inflation

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
  int ari;
  double new_ARI, x, y, result;

  // user input
  cout << "\nEnter in the annual rate of inflation(between 1-10%): ";
  cin >> ari;

  // checks condition for 1-10 input
  while(ari < 1 || ari > 10)
    {
      cout << "\nError: Please enter a whole number between 1-10";
      cin >> ari;
    }

  // calculations
  new_ARI = static_cast<double>(ari) / 100;

  // display information
  cout << "\nInflation in the next 10 years";
  cout << "\n------------------------------";

  // calculations                                                                                    
  x = new_ARI * 1000;
  y = x + 1000;
  result = (1/(y/1000)) * 1000;

  for(int i = 0; i < 10; i++)
    {      
      cout << "\nYear " << i+1 << " $: ";
      cout << showpoint << setprecision(5) << result;

      // calculation
      result = result * (1/(y/1000));
    }

  cout << endl;
  return 0;
}
