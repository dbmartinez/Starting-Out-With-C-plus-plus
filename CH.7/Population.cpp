// Population.cpp file

#include "Population.h"
#include<iostream>
#include<iomanip>
#include<locale>
using namespace std;

const int PERCENT = 100;

// constructor
Population::Population(double p, double b, double d)
{
  population = p;
  births = b;
  deaths = d;
}

// get birthrate and calculate
double Population::getBirthRate(double birth, double population)
{
  birth = birth / population;
  birth *= PERCENT;

  return birth;
}

// get deathrate and calculate
double Population::getDeathRate(double death, double population)
{
  death = death / population;
  death *= PERCENT;

  return death;
}

// display information
void Population::print(double births, double deaths)
{
  // add comma to large integers
  cout.imbue(locale("en_US"));

  cout << fixed << setprecision(0);
  // display information
  cout << "\nPopulation: " << population;

  cout << fixed << showpoint << setprecision(2);
  cout << "\nBirth rate: " << births << "%";
  cout << "\nDeath rate: " << deaths << "%";
  cout << endl << endl;
}
