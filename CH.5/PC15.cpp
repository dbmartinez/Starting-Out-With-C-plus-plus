// Student Line-Up
#include<iostream>
#include<string>
using namespace std;

int main()
{
  int num;
  string name, first, last;

  cout << "\nEnter the number of students(between 1-20): ";
  cin >> num;
  
  while(num < 1 || num > 20)
    {
      cout << "\nError: Please enter in a number betweem 1-20: ";
      cin >> num;
    }

  cout << "Enter student 1 name: ";
  cin >> name;

  first = last = name;

  for(int i = 1; i < num; i++)
    {
      cout << "Enter student " << i + 1 << " name: ";
      cin >> name;

      if(name < first)
	first = name;

      if(name > last)
	last = name;
    }
 
  cout << "\nStudents";
  cout << "\n--------";
  cout << "\nFirst in line: " << first;
  cout << "\nLast in line: " << last << endl;
  
  return 0;
}
