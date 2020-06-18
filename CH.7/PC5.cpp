// Population

#include<iostream>
#include<cctype>
#include "Population.h"
using namespace std;

// function prototypes
int lessThanTwo(int);
int lessThanZero(int);

int main()
{
  double p, b, d;
  double newBirth, newDeath;
  char repeat;

  do
    {
      cout << "\nEnter in current population: ";
      cin >> p;
      p = lessThanTwo(p);

      cout << "Enter in number of births: ";
      cin >> b;
      b = lessThanZero(b);
  
      cout << "Enter in number of deaths: ";
      cin >> d;
      d = lessThanZero(d);

      Population pop(p, b, d);
      newBirth = pop.getBirthRate(b, p);
      newDeath = pop.getDeathRate(d, p);
      pop.print(newBirth, newDeath);  
    
      cout << "\nRepeat Program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes and n for no";
	  cout << "\nRe-enter choice: ";
	  cin >> repeat;
	}

      if(toupper(repeat) == 'N')
	cout << "\nHave a great day..." << endl << endl;

    }while(toupper(repeat) == 'Y');  
  
  return 0;
}

// if population is less than 2
int lessThanTwo(int p)
{
  if(p < 2)
    p = 2;

  return p;
}

// if birth/death rate is less than 0
int lessThanZero(int rate)
{
  if(rate < 0)
    rate = 0;

  return rate;
}
