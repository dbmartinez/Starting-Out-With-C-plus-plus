// Using Files - Student Line Up

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  // variables
  ifstream fin;
  fin.open("Lineup.txt");
  string name, first, last;
  
  fin >> name;
  first = last = name;
  
  while(fin >> name)
    {
      if(name < first)
        first = name;

      if(name > last)
        last = name;
    }

  cout << "\nStudents";
  cout << "\n--------";
  cout << "\nFirst in line: " << first;
  cout << "\nLast in line: " << last << endl;

  fin.close();
  return 0;
}
