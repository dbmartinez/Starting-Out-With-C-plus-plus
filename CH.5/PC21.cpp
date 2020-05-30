// Diamond Display

#include<iostream>
using namespace std;

int main()
{
  // top half
  for(int row = 1; row <= 4; row++)
    {
      for(int col = 1; col <= 5 - row; col++)
	{
	  cout << " ";
	}

      for(int star = 1; star <= 2*row-1; star++)
	{
	  cout << "+";
	}

      cout << endl;
    }


  for(int row = 3; row > 0; row--)
    {
      for(int col = 1; col <= 5 - row; col++)
        {
          cout << " ";
        }

      for(int star = 1; star <= 2*row-1; star++)
        {
          cout << "+";
        }

      cout << endl;
    }


  return 0;
}
