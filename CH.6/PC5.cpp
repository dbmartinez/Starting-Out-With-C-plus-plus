// Winning Division

#include<iostream>
#include<string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
	double neSales, seSales, nwSales, swSales;
	
	neSales = getSales("Northeast");
	seSales = getSales("Southeast");
	nwSales = getSales("Northwest");
	swSales = getSales("Southwest");
	findHighest(neSales, seSales, nwSales, swSales);
	
	return 0;
}

double getSales(string section)
{
	double input;
	
	cout << "Enter in quarterly sale for " << section << " division: $";
	cin >> input;	
	
	while(input < 0)
	{
		cout << "\nPlease re-enter quarterly sales: ";
		cin >> input;
	}
	
	return input;
}

void findHighest(double div1, double div2, double div3, double div4)
{
	if(div1 > div2 && div1 > div3 && div1 > div4)
	{
		cout << "\nNortheast is the Highest growing division with $" << div1;	
	}
	
	else if(div2 > div1 && div2 > div3 && div2 > div4)
	{
		cout << "\nSoutheast is th Highest growing division with $" << div2;	
	}
	
	else if(div3 > div1 && div3 > div2 && div3 > div4)
	{
		cout << "\nNorthwest is the Highest growing division with $" << div3;	
	}
	
	else
	{
		cout << "\nSouthwest is the Highest growing division with $" << div4;	
	}
}

