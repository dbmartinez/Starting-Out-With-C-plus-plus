// Heading.cpp file
#include "Heading.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// default constructor
Heading::Heading()
{
  name = " ";
  report = " ";
}

// overloaded constructor
Heading::Heading(string n = "ABC Industries", string r = "Report")
{
  name = n;
  report = r;
}

// setters
void Heading::setName(string n)
{
  name = n;
}

void Heading::setReport(string r)
{
  report = r;
}

// getters
string Heading::getName()
{
  return name;
}

string Heading::getReport()
{
  return report;
}

// print display
void Heading::print()
{
  cout << endl << endl;

  for(int i = 1; i <= 50; i++)
    cout << "*";

  cout << endl;
  cout << setw(27) << name << endl;
  cout << setw(30) << report << endl;

  for(int j = 1; j <= 50; j++)
    cout << "*";

  cout << endl << endl;
}
