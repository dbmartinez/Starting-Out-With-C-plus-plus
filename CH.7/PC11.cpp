// Monthly Budget Screen Form

#include<iostream>
#include<iomanip>
#include <windows.h>
using namespace std;

struct MonthlyBudget
{
  double housing;
  double utilities;
  double houseExpenses;
  double transportation;
  double food;
  double medical;
  double insurance;
  double entertainment;
  double clothing;
  double misc;

  // default constructor
  MonthlyBudget()
  {
    housing = utilities = houseExpenses = transportation = food = medical = insurance = entertainment = clothing = misc = 0;
  }

  // overloaded constructor
  MonthlyBudget(double h, double u, double he, double t, double f, double m, double i, double e, double c, double mi)
  {
    housing = h;
    utilities = u;
    houseExpenses = he;
    transportation = t;
    food = f;
    medical = m;
    insurance = i;
    entertainment = e;
    clothing = c;
    misc = mi;
  }
};

// function prototypes
void print(HANDLE, MonthlyBudget, MonthlyBudget);
void placeCursor(HANDLE, int, int);
void displayPrompts(HANDLE);
void getUserInput(HANDLE, MonthlyBudget&);

int main()
{
  MonthlyBudget mb1, mb2;

  HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
  
  mb1.housing = 500;
  mb1.utilities = 150;
  mb1.houseExpenses = 65;
  mb1.transportation = 50;
  mb1.food = 250;
  mb1.medical = 30;
  mb1.insurance = 100;
  mb1.entertainment = 150;
  mb1.clothing = 75;
  mb1.misc = 50;
  	
  displayPrompts(screen);
  getUserInput(screen, mb2);
  print(screen, mb1, mb2);

  return 0;
}

// place cursor
void placeCursor(HANDLE screen, int row, int col)
{
  COORD position;
  position.Y = row;
  position.X = col;
  SetConsoleCursorPosition(screen, position);	
}

// display prompt
void displayPrompts(HANDLE screen)
{
  placeCursor(screen, 3, 25);	
  cout << "*******Data Entry*******" << endl;	
  placeCursor(screen, 5, 25);
  cout << "Enter amount spent on housing: ";
  placeCursor(screen, 7, 25);	
  cout << "Enter amount spent on utilities: ";
  placeCursor(screen, 9, 25);
  cout << "Enter amount spent on house expenses: ";
  placeCursor(screen, 11, 25);
  cout << "Enter amount spent on transportation: ";
  placeCursor(screen, 13, 25);
  cout << "Enter amount spent on food: ";
  placeCursor(screen, 15, 25);
  cout << "Enter amount spent on medical: ";
  placeCursor(screen, 17, 25);
  cout << "Enter amount spent on insurance: ";
  placeCursor(screen, 19, 25);
  cout << "Enter amount spent on entertainment: ";
  placeCursor(screen, 21, 25);
  cout << "Enter amount spent on clothing: ";
  placeCursor(screen, 23, 25);
  cout << "Enter amount spent on miscellaneous: ";
}

// get user input
void getUserInput(HANDLE screen, MonthlyBudget &mb2)
{
  placeCursor(screen, 5, 56);
  cin >> mb2.housing;
  placeCursor(screen, 7, 58);
  cin >> mb2.utilities;
  placeCursor(screen, 9, 63);
  cin >> mb2.houseExpenses;
  placeCursor(screen, 11, 63);
  cin >> mb2.transportation;
  placeCursor(screen, 13, 53);
  cin >> mb2.food;
  placeCursor(screen, 15, 56);
  cin >> mb2.medical;
  placeCursor(screen, 17, 58);
  cin >> mb2.insurance;
  placeCursor(screen, 19, 62);
  cin >> mb2.entertainment;
  placeCursor(screen, 21, 57);
  cin >> mb2.clothing;
  placeCursor(screen, 23, 62);
  cin >> mb2.misc;
}

// display results
void print(HANDLE screen, MonthlyBudget mb1, MonthlyBudget mb2)
{
  double housing, util, exp, transport, foo;
  double med, insur, entertain, cloth, m, result;
  
  // calculation
  housing = mb1.housing - mb2.housing;	
  util = mb1.utilities - mb2.utilities;
  exp = mb1.houseExpenses - mb2.houseExpenses;
  transport = mb1.transportation - mb2.transportation;
  foo = mb1.food - mb2.food;
  med = mb1.medical - mb2.medical;
  insur = mb1.insurance - mb2.insurance;
  entertain = mb1.entertainment - mb2.entertainment;
  cloth = mb1.clothing - mb2.clothing;
  m = mb1.misc - mb2.misc;
  result = housing + util + exp + transport + foo + med + insur + entertain + cloth + m;	
	
  placeCursor(screen, 25, 0);	
  cout << "\t Monthly Budget";
  cout << "\n\t-------------";
  cout << fixed << showpoint << setprecision(2);
  cout << "\nCategory       Budget   Actual    Difference";
  cout << "\n--------------------------------------------";
  cout << "\nHousing        $" << mb1.housing << "  $" << mb2.housing << setw(4) << "$" << housing;
  cout << "\nUtilities      $" << mb1.utilities << "  $" << mb2.utilities << "    $" << util;
  cout << "\nHouse Expenses $ " << mb1.houseExpenses << "  $" << mb2.houseExpenses << "    $" << exp;
  cout << "\nTransportation $ " << mb1.transportation << "  $" << mb2.transportation << "    $" << transport;
  cout << "\nFood           $" << mb1.food << "  $" << mb2.food << "   $" << foo;
  cout << "\nMedical        $ " << mb1.medical << "  $" << mb2.medical << "   $" << med;
  cout << "\nInsurance      $" << mb1.insurance << "  $" << mb2.insurance << "   $" << insur;
  cout << "\nEntertainment  $" << mb1.entertainment << "  $" << mb2.entertainment << "    $" << entertain;
  cout << "\nClothing       $ " << mb1.clothing << "  $" << mb2.clothing << "    $" << cloth;
  cout << "\nMiscellaneous  $ " << mb1.misc << "  $" << mb2.misc << "    $" << m;
  cout << "\n\nTotal spent: $" << result;
  
  if(result < 0)
  	cout << "\nYou're over budget";	
	
  else
  	cout << "\nYou're under budget...";
  
  cout << endl << endl;
}
