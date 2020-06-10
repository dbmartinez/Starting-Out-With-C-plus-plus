// isPrime Function

#include<iostream>
using namespace std;

bool isPrime(int);

int main()
{
  int prime_num;

  cout << "\nEnter in a number to see if it's prime: ";
  cin >> prime_num;

  if(isPrime(prime_num))
    {
      if(prime_num == 1)
	{
	  cout << endl;
	  cout << prime_num << " is not a prime number";
	  cout << endl << endl;
	}

      else if(prime_num != 1)
	{
	  cout << endl;
	  cout << prime_num << " is a prime number";
	  cout << endl << endl;
	}
    }

  else
    {
      cout << endl;
      cout << prime_num << " is not a prime number";
      cout << endl << endl;
    }
  
  return 0;
}

//
bool isPrime(int prime_num)
{

  bool prime = true;

  for(int i = 2; i <= prime_num / 2; i++) 
    {
      if(prime_num % i == 0)
	{
	  prime = false;
	  break;
	}
    }

  return prime;
}
