// String Compare
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

// Function Prototype
string upperCaseit(string s);
bool sameString(string s1, string s2);

int main()
{
  // variables
  string string1, string2;

  // user input
  cout << "Enter in 2 strings and I'll see if they're the same.";
  cout << "\nEnter in the first string: ";
  cin >> string1;
  cout << "Enter in the second string: ";
  cin >> string2;

  if(sameString(string1, string2))
    cout << "\nThey're the same...\n";

  else
    cout << "\nThey're not the same...\n";

  return 0;
}

// uppercase all letters
string upperCaseIt(string s)
{
  // use an array to store letters to compare
  // don't know how to do this without an array :(
  for(int i = 0; i < s.size(); i++)
    {
      s[i] = toupper(s[i]);
    }
  
  return s;
}

// check to see of both strings are equal
bool sameString(string s1, string s2)
{
  if(upperCaseIt(s1) == upperCaseIt(s2))
    return true;

  else
    return false;
}
