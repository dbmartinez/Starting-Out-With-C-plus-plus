// Heading.h file
#ifndef HEADING_H
#define HEADING_H
#include<iostream>
#include<string>
using namespace std;

class Heading
{
 private:
  string name;
  string report;

 public:
  Heading();
  Heading(string, string);
  void setName(string);
  void setReport(string);
  string getName();
  string getReport();
  void print();
};
#endif
