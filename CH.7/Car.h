// Car.h file

#ifndef CAR_H
#define CAR_H
#include<iostream>
#include<string>
using namespace std;

class Car
{
 private:
  int year;
  int speed;
  string make;

 public:
  Car();
  Car(int, int, string);
  void setYear(int);
  void setSpeed(int);
  void setMake(string);
  int getYear();
  int getSpeed();
  string getMake();
  void accelerate(int);
  void brake(int);
  void print(int, string);
};
#endif
