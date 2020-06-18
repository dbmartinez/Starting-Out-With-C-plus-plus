// Transient Population

#include<iostream>
#include<iomanip>
#include<cctype>
#include<cstdlib>
using namespace std;

void userInput();
double calc(double, double, double, int, int);
int lessThanZero(double);

int main()
{
  char repeat;
  
  do
    {
      userInput();
      
      cout << "\nRepeat the program: ";
      cin >> repeat;
      
      system("cls");
      if(toupper(repeat) != 'Y')
	cout << "\nHave a great day..." << endl;
      
    }while(toupper(repeat) == 'Y');
  
  return 0;
}

// user input
void userInput()
{
  int years, leaving, entering;
  double birthRate, deathRate, startSize, result, new_result;
  
  cout << "\nEnter the starting size of a population: ";
  cin >> startSize;
  
  while(startSize < 3)
    {
      cout << "\nError: Population must be greater than 2.";
      cout << "\nRe-enter the starting size of a population: ";
      cin >> startSize;
    }
  
  cout << "Enter the annual birth rate: ";
  cin >> birthRate;
  
  birthRate = lessThanZero(birthRate);
  
  cout << "Enter the annual death rate: ";
  cin >> deathRate;
  
  deathRate = lessThanZero(deathRate);
  
  cout << "Enter the number of years to display: ";
  cin >> years;

  while(years < 1)
    {
      cout << "\nError: years must be greater than 1.";
      cout << "\nRe-enter the number of years to display: ";
      cin >> years;
    }

  cout << "Enter in individuals leaving the state: ";
  cin >> leaving;

  leaving = lessThanZero(leaving);

  cout << "Enter in individuals entering the state: ";
  cin >> entering;

  entering = lessThanZero(entering);

  cout << "\nStarting Population: " << startSize << endl;

  for(int i = 1; i <= years; i++)
    {
      result = calc(startSize, birthRate, deathRate, leaving, entering);
      cout << "Year " << i << " Population: ";
      cout << static_cast<int>(result) << endl;
      startSize = result;
    }
}

// calculate new population
double calc(double startSize, double birthRate, double deathRate, int leaving, int entering)
{
  double result;
  
  birthRate /= 100;
  deathRate /= 100;
  
  result = startSize *(1 + birthRate)*(1 - deathRate) + entering - leaving;
  
  return result;
}

// if user enters number less than zero
int lessThanZero(double input)
{
  while(input < 0)
    {
      cout << "\nError: Cannot be less than zero";
      cout << "\nRe-enter information: ";
      cin >> input;
    }

  return input;
}
