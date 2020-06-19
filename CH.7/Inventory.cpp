// Inventory.cpp file
#include "Inventory.h"
#include<iostream>
using namespace std;

// default constructor
Inventory::Inventory()
{
  itemNumber = 0;
  quantity = 0;
  cost = 0;
}

// overloaded constructor
Inventory::Inventory(int itemNum, int quan, double c)
{
  itemNumber = itemNum;
  quantity = quan;
  cost = c;
}

// setter
void Inventory::setItemNumber(int itemNum)
{
  itemNumber = itemNum;
}

void Inventory::setQuantity(int quan)
{
  quantity = quan;
}

void Inventory::setCost(double c)
{
  cost = c;
}

// getters
int Inventory::getItemNumber()
{
  return itemNumber;
}

int Inventory::getQuantity()
{
  return quantity;
}

double Inventory::getCost()
{
  return cost;
}

// calculate total cost
double Inventory::getTotalCost()
{
  double totalCost;

  totalCost = cost * quantity;

  return totalCost;
}
