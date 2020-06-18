// Gratuity.h file                                                                   
#ifndef GRATUITY_H
#define GRATUITY_H

class Gratuity
{
 private:
  double taxRate;

 public:
  Gratuity(double);
  double computeTip(double, double);
};
#endif
