// Car class

#include<iostream>
#include<string>
#include<cctype>
#include "Car.h"
using namespace std;

// function prototypes
int carAge(int);
int lessThanZero(int);
string typeOfCar(string);

int main()
{
  char repeat;
  int year, speed;
  string make;
  Car c;
  
  do
    {
      cout << "\nEnter year: ";
      cin >> year;
      year = carAge(year);

      cout << "Enter speed: ";
      cin >> speed;
      speed = lessThanZero(speed);

      cout << "Enter Make of car: ";
      cin >> make;
      make = typeOfCar(make);

      c.setYear(year);
      c.setSpeed(speed);
      c.setMake(make);
      
      c.print(year, make);
      c.accelerate(speed);
      c.brake(speed);
   
      cout << "\nRepeat Program(y/n): ";
      cin >> repeat;

      while(toupper(repeat) != 'Y' && toupper(repeat) != 'N')
	{
	  cout << "\nError: y for yes and n for no...";
	  cout << "\nPlease re-enter choice: ";
	  cin >> repeat;
	}

    }while(toupper(repeat) == 'Y');

  return 0;
}

// check cars age
int carAge(int age)
{
  while(age <= 1908)
    {
      cout << "\nError: vehicle year can't be less than 1908...";
      cout << "\nRe-enter year of vehicle";
      cin >> age;
    }

  return age;
}

// check if less than zero
int lessThanZero(int check)
{
  while(check < 0)
    {
      cout << "\nError: cannot be a negative number...";
      cout << "\nRe-enter speed: ";
      cin >> check;
    }

  return check;
}

// check type of car
string typeOfCar(string type)
{
  while(type != "Honda"  && type != "Acura" && type != "Nissan" && type != "Toyota" && type != "Lexus" && type != "Ford" && type != "Chevrolet" && type != "Chrysler" && type != "Tesla" && type != "Hyundai" && type != "Kia" && type != "BMW" && type != "Mercedes")
    {
      cout << "\nError: Vehicle not in database...";
      cout << "\nRe-enter data: ";
      cin >> type;
    }

  return type;
}
