// Rectangle Display

#include<iostream>
using namespace std;

int main()
{
  int x, y, temp;

  // larger number must be the length!!!
  cout << "\nEnter in 2 positive numbers between 2 and 10:\n";
  cin >> x >> y;
  cout << endl;

  while(x < 2 || y < 2 || x > 10 || y > 10)
    {
      cout << "\nError: Please re-enter 2 positive numbers: ";
      cin >> x >> y;
    }

  // x is length 
  if(x > y)
    {

      for(int row = 0; row < y; row++)
	{
	  for(int col = 0; col < x; col++)
	    {
	      cout << "X";
	    }
	  
	  cout << endl;
	}
    }

  // make x(length) big the variable that holds
  // the bigger value
  else if(x < y)
    {
      // swap variables
      temp = x;
      x = y;
      y = temp;

      for(int row = 0; row < y; row++)
        {
          for(int col = 0; col < x; col++)
            {
              cout << "X";
            }

          cout << endl;
        }

    }

  return 0;
}
