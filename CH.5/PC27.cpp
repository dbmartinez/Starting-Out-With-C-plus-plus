// Using Files - Population Bar Chart

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  // variables
  int num1, num2, num3, num4, num5, num6;
  int result1, result2, result3, result4, result5, result6;
  ifstream fin;
  fin.open("People.txt");

  // input file into variables
  fin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
  result1 = num1 / 1000;
  result2 = num2 / 1000;
  result3 = num3 / 1000;
  result4 = num4 / 1000;
  result5 = num5 / 1000;
  result6 = num6 / 1000;

  // display information
  cout << "\nPRAIRIEVILLE POPULATION GROWTH";
  cout << "\n(each * = 1000 people)";
  cout << "\n---------------";

  cout << "\nYear 1910: ";
  for(int i = 0; i < result1; i++)
    cout << "*";

  cout << "\nYear 1930: ";
  for(int i = 0; i < result2; i++)
    cout << "*";

  cout << "\nYear 1950: ";
  for(int i = 0; i < result3; i++)
    cout << "*";

  cout << "\nYear 1970: ";
  for(int i = 0; i < result4; i++)
    cout << "*";

  cout << "\nYear 1990: ";
  for(int i = 0; i < result5; i++)
    cout << "*";

  cout << "\nYear 2010: ";
  for(int i = 0; i < result6; i++)
    cout << "*";

  cout << endl;
  fin.close();
  return 0;
}
