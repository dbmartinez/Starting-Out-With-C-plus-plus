// Movie Profit
#include<iostream>
#include<iomanip>
#include<locale>
#include<cctype>
#include<string>
using namespace std;

struct MovieData
{
  string title;
  string director;
  int year;
  int runningTime;
  double pro_cost;
  double revenue;

  // default constructor 
  MovieData()
  {
    title = director = " ";
    year = runningTime = 0;
    pro_cost = revenue = 0;
  }

  // overloaded constructor
  MovieData(string t, string d, int y, int rt, double pc, double r)
  {
    title = t;
    director = d;
    year = y;
    runningTime = rt;
    pro_cost = pc;
    revenue = r;
  }
};

// function prototype
void print(MovieData, double);
int lessThanZero(int);
double movieLoss(double, double);

// main function
int main()
{
  char repeat;
  double result;
  MovieData film;

  cout << "\nPress enter to continue...";

  do
    {
      cin.ignore();
      cout << "\nEnter movie title: ";
      getline(cin, film.title);

      cout << "Enter directors name: ";
      getline(cin, film.director);

      cout << "Enter year of film: ";
      cin >> film.year;
      film.year = lessThanZero(film.year);

      cout << "Enter the films running time: ";
      cin >> film.runningTime;
      film.runningTime = lessThanZero(film.runningTime);

      cout << "Enter in the production costs: ";
      cin >> film.pro_cost;
      film.pro_cost = lessThanZero(film.pro_cost);

      cout << "Enter in the films revenue: ";
      cin >> film.revenue;
      film.revenue = lessThanZero(film.revenue);
      
      result = movieLoss(film.pro_cost, film.revenue);

      print(film, result);

      cout << "\nRepeat Program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
        {
          cout << "\nError: y for yes and n for no";
          cout << "\nRe-enter choice: ";
          cin >> repeat;
        }

    }while(toupper(repeat) == 'Y');

  return 0;
}

// display results
void print(const MovieData film, double result)
{
  cout << "\n\tResults";
  cout << "\n\t-------";
  cout << "\nMovie Title:      " << film.title;
  cout << "\nDirector:         " << film.director;
  cout << "\nFilm Release:     " << film.year;
  cout << "\nRunning Time:     " << film.runningTime;

  // set numbers to 2 decimal places for formatting
  // use commas to properly show $$ amount
  cout.imbue(locale("en_US"));
  cout << fixed<< showpoint <<setprecision(2);
  cout << "\nProduction Cost: $" << film.pro_cost;
  cout << "\nFilm Revenue:    $" << film.revenue;
 
  if(film.revenue > film.pro_cost)
    {
      cout << "\nMovie Profit:    $" << result;
    }

  else
    {
      cout << "\nMovie Loss:      $" << result;
    }

  cout << endl << endl;
}

// check for negative numbers
int lessThanZero(int temp)
{
  while(temp < 0)
    {
      cout << "\nError: Cannot be less than 0...";
      cout << "\nRe-enter information: ";
      cin >> temp;
    }

  return temp;
}

// check to see if film was produced at a loss
double movieLoss(double pro_cost, double revenue)
{
  double result;

  result = revenue - pro_cost;

  return result;
}
