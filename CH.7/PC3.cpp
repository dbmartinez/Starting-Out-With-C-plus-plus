// Widget Factory
#include<iostream>
#include "Widget.h"
using namespace std;

int main()
{
  int widge, result;
  Widget w;

  cout << "\nHow many widgets have been ordered: ";
  cin >> widge;
  
  result = w.calc(widge);
  w.print(widge, result);

  return 0;
}
