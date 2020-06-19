// Corporate Sales Data

#include<iostream>
#include<iomanip>
#include<cctype>
#include<locale>
#include<string>
using namespace std;

struct CorpData
{
  string division;
  double firstQ;
  double secondQ;
  double thirdQ;
  double fourthQ;

  // default constructor
  CorpData()
  {
    division = " ";
    firstQ = secondQ = thirdQ = fourthQ = 0;
  }

  // overloaded constructor
  CorpData(string d, double fq, double sq, double tq, double foq)
  {
    division = d;
    firstQ = fq;
    secondQ = sq;
    thirdQ = tq;
    fourthQ = foq;
  }
};

// function prototype
void calc(CorpData);
double lessThanZero(double);

int main()
{
  char repeat;
  CorpData corp1, corp2, corp3, corp4;

  do
    {
      corp1.division = "East";
      cout << "\n\tEast Division";
      cout << "\n\t-------------\n";
      cout << "Enter first quarter sales: ";
      cin >> corp1.firstQ;
      corp1.firstQ = lessThanZero(corp1.firstQ);
      
      cout << "Enter in second quarter sales: ";
      cin >> corp1.secondQ;
      corp1.secondQ = lessThanZero(corp1.secondQ);
      
      cout << "Enter in third quarter sales: ";
      cin >> corp1.thirdQ;
      corp1.thirdQ = lessThanZero(corp1.thirdQ);
      
      cout << "Enter in the fourth quarter sales: ";
      cin >> corp1.fourthQ;
      corp1.fourthQ = lessThanZero(corp1.fourthQ);

      corp2.division = "West";
      cout << "\n\tWest Division";
      cout << "\n\t-------------\n";
      cout << "Enter first quarter sales: ";
      cin >> corp2.firstQ;
      corp2.firstQ = lessThanZero(corp2.firstQ);

      cout << "Enter in second quarter sales: ";
      cin >> corp2.secondQ;
      corp2.secondQ = lessThanZero(corp2.secondQ);

      cout << "Enter in third quarter sales: ";
      cin >> corp2.thirdQ;
      corp2.thirdQ = lessThanZero(corp2.thirdQ);

      cout << "Enter in the fourth quarter sales: ";
      cin >> corp2.fourthQ;
      corp2.fourthQ = lessThanZero(corp2.fourthQ);
      
      corp3.division = "North";
      cout << "\n\tNorth Division";
      cout << "\n\t--------------\n";
      cout << "Enter first quarter sales: ";
      cin >> corp3.firstQ;
      corp3.firstQ = lessThanZero(corp3.firstQ);

      cout << "Enter in second quarter sales: ";
      cin >> corp3.secondQ;
      corp3.secondQ = lessThanZero(corp3.secondQ);

      cout << "Enter in third quarter sales: ";
      cin >> corp3.thirdQ;
      corp3.thirdQ = lessThanZero(corp3.thirdQ);

      cout << "Enter in the fourth quarter sales: ";
      cin >> corp3.fourthQ;
      corp3.fourthQ = lessThanZero(corp3.fourthQ);

      corp4.division = "South";
      cout << "\n\tSouth Division";
      cout << "\n\t--------------\n";
      cout << "Enter first quarter sales: ";
      cin >> corp4.firstQ;
      corp4.firstQ = lessThanZero(corp4.firstQ);

      cout << "Enter in second quarter sales: ";
      cin >> corp4.secondQ;
      corp4.secondQ = lessThanZero(corp4.secondQ);

      cout << "Enter in third quarter sales: ";
      cin >> corp4.thirdQ;
      corp4.thirdQ = lessThanZero(corp4.thirdQ);

      cout << "Enter in the fourth quarter sales: ";
      cin >> corp4.fourthQ;
      corp4.fourthQ = lessThanZero(corp4.fourthQ);

      calc(corp1);
      calc(corp2);
      calc(corp3);
      calc(corp4);
    
      cout << "Repeat Program(y/n):";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes and n for no.";
	  cout << "\nRe-enter choice: ";
	  cin >> repeat;
	}

      if(toupper(repeat) == 'N')
	cout << "\nHave a great day..." << endl << endl;

    }while(toupper(repeat) == 'Y');

  return 0;
}

// display results
void calc(const CorpData corp)
{
  double result, average;
  
  // calculation
  result = corp.firstQ + corp.secondQ + corp.thirdQ + corp.fourthQ;
  average = result / 4;

  cout << "\n\t  " << corp.division;
  cout << "\n\t---------";
  cout.imbue(locale("en_US"));
  cout << fixed << showpoint << setprecision(2);
  cout << "\nFirst Quarter Sales:  $" << corp.firstQ;
  cout << "\nSecond Quarter Sales: $" << corp.secondQ;
  cout << "\nThird Quarter Sales:  $" << corp.thirdQ;
  cout << "\nFourth Quarter Sales: $" << corp.fourthQ;
  cout << "\nAverage Sales:        $" << average;
  cout << "\nTotal Sales:          $" << result;
  cout << endl << endl;
}

// if user enters a number below 0
double lessThanZero(double temp)
{
  while(temp < 0)
    {
      cout << "\nError: Cannot be less than 0...";
      cout << "\nRe-enter information: ";
      cin >> temp;
    }

  return temp;
}
