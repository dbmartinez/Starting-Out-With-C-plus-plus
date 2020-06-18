// Gratuity.cpp file                                                                 
#include "Gratuity.h"
#include<iostream>
#include<iomanip>
#include<locale>
using namespace std;

// constructor
Gratuity::Gratuity(double tax)
{
  taxRate = tax / 100;
}


double Gratuity::computeTip(double bill, double tip)
{
  double result;

  // calculation
  result = bill + tip;

  cout.imbue(locale("en_US"));
  cout << fixed << showpoint << setprecision(2);
  cout << "\nMeal cost before tax: $" << result;
  
  // calculation
  result = result + (result * taxRate);
  cout << "\nMeal cost after tax:  $" << result;
  cout << endl << endl;

  return result;
}
