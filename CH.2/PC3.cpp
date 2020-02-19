// Sales Tax

#include<iostream>

using namespace std;

int main()
{
	double stateSalesTax = 6.5, newStateTax, newCountyTax;
	double countySalesTax = 2.0, purchase = 95.0;
	
	cout << "\nThe State sales tax is " << stateSalesTax << "%\n";
	cout << "The County sales tax is " << countySalesTax << "%\n";
	cout << "The total purchase is $" << purchase << endl;
	
	newStateTax = stateSalesTax/100;
	newCountyTax = countySalesTax/100;
	
	int newPurchase = purchase * newStateTax + purchase * newCountyTax;
	
	cout << "\nThe total tax amount is $" << newPurchase << endl;
	
	int total = newPurchase + purchase;
	
	cout << "\nGrand total with tax is $" << total << endl;
	
	
	return 0;
}
