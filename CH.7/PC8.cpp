// Movie data
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

struct MovieData
{
  string title;
  string director;
  int year;
  int runningTime;

  // default constructor
  MovieData()
  {
    title = director = " ";
    year = runningTime = 0;
  }

  // overloaded constructor
  MovieData(string t, string d, int y, int rt)
  {
    title = t;
    director = d;
    year = y;
    runningTime = rt;
  }
};

// function prototype
void print(MovieData);
int lessThanZero(int);

// main function
int main()
{
  char repeat;
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

      print(film);
    
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
void print(MovieData film)
{
  cout << "\nMovie Title:  " << film.title;
  cout << "\nDirector:     " << film.director;
  cout << "\nFilm Release: " << film.year;
  cout << "\nRunning Time: " << film.runningTime;
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
