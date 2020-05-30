// Hotel Suites Occupancy

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
  double percentage, new_suites;
  int suites;
  int max_floors = 6;
  int max_suites = 20;
  double total_suites = 120;

  for(int i = 10; i < 17; i++)
    {
      if(i == 13)
        {
          cout << "\nThere is no 13th floor!\n";
          continue;
        }

      cout << "\nInput the number of occupied suites for floor " << i << ": ";
      cin >> suites;
      
      while(suites < 1 || suites > max_suites)
	{
	  cout << "\nError... Please re-enter the number of suites: ";
	  cin >> suites;
	}

      // add number of suites
      new_suites += suites;
    }

  // calculate percentage
  percentage = 100 * new_suites / total_suites;

  // display information
  cout << "\nHotel Information";
  cout << "\n-----------------";
  cout << "\nThe hotel has " << max_suites << " suites per floor.";
  cout << "\nAmount of rooms that's occupied: " << static_cast<int>(new_suites);
  cout << "\nPercentage of rooms occupied: " << percentage << "%\n\n";

  return 0;
}
