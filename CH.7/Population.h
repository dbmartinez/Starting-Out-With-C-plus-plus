// Populaton.h class

#ifndef POPULATION_H
#define POPULATION_H

class Population
{
 private:
  double population;
  double births;
  double deaths;

 public:
  Population(double, double, double);
  double getBirthRate(double, double);
  double getDeathRate(double, double);
  void print(double, double);
};
#endif
