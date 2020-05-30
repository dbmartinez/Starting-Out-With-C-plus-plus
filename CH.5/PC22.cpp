// Triangle Display

#include<iostream>
using namespace std;

int main()
{
  // top half of triangle
  for(int row = 1; row <= 4; row++)
    {
      for(int col = 0; col < 2*row-1; col++)
	{
	  cout << "+";
	}
      
      cout << endl;
    }

  // bottom half of triangle
  for(int row = 3; row > 0; row--)
    {
      for(int col = 0; col < 2*row-1; col++)
        {
          cout << "+";
        }

      cout << endl;
    }

  return 0;
}
