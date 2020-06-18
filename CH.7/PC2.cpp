// Report Heading

#include<iostream>
#include<string>
#include<cctype>
#include "Heading.h"
using namespace std;

int main()
{
  char repeat;
  string name;
  string report;
  Heading head;

  cout << "\nPress enter to continue...";
  do
    {
      cin.get();
      cout << "\nEnter in name of the company: ";
      getline(cin, name);
  
      cout << "Enter in the report name: ";
      getline(cin, report);
      
      head.setName(name);
      head.setReport(report);
      head.print();

      cout << "\nRepeat program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes or n for no";
	  cout << "\nre-enter: ";
	  cin >> repeat;
	}

    }while(toupper(repeat) == 'Y');

  return 0;
}
