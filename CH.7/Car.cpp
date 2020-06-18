// Car.cpp class
#include "Car.h"
#include<iostream>
#include<string>
using namespace std;

// default constructor
Car::Car()
{
  year = 0;
  speed = 0;
  make = " ";
}

// overloaded constructor
Car::Car(int y, int s, string m)
{
  year = y;
  speed = s = 0;
  make = m;
}

// setter
void Car::setYear(int y)
{
  year = y;
}

void Car::setSpeed(int s)
{
  speed = s;
}

void Car::setMake(string m)
{
  make = m;
}

int Car::getYear()
{
  return year;
}

int Car::getSpeed()
{
  return speed;
}

string Car::getMake()
{
  return make;
}

void Car::accelerate(int speed)
{
  for(int i = 1; i <= 5; i++)
    {
      cout << "\nAcceleration Speed: " << speed;
      speed += 5;
    }
  cout << endl;
}

void Car::brake(int speed)
{
  for(int i = 1; i <= 5; i++)
    {
      cout << "\nDeceleration Speed: " << speed;
      speed -= 5;
    }

  cout << endl << endl;
}

void Car::print(int y, string m)
{
  cout << "\nYear:            " << y;
  cout << "\nMake of vehicle: " << m << endl;;
}
