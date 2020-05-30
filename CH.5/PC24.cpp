// Sales Bar Chart

#include<iostream>
#include<string>
using namespace std;

int main()
{
  // variables
  int num1, result1, num2, result2, num3, result3;

  // user input
  cout << "\nWhen entering amount round to the nearest $100";
  cout << "\nEnter today's sales for store 1: ";
  cin >> num1;
  
  cout << "\nEnter today's sales for store 2: ";
  cin >> num2;
 
  cout << "\nEnter today's sales for store 3: ";
  cin >> num3;
 
  // calculations
  result1 = num1/100;
  result2 = num2/100;
  result3 = num3/100;

  // display information
  cout << "\nDAILY SALES";
  cout << "\n(each * = $100)";
  cout << "\n---------------";
  cout << "\nStore 1: ";
  for(int i = 0; i < result1; i++)
    cout << "*";

  cout << "\nStore 2: ";
  for(int i = 0; i < result2; i++)
    cout << "*";

  cout << "\nStore 3: ";
  for(int i = 0; i < result3; i++)
    cout << "*";  

  cout << endl;
  return 0;
}
