// Circle Areas

#include<iostream>
using namespace std;

int main()
{
	const double PI = 3.14;
	double area;
	
	cout << "Radius\tArea\n";
	cout << "--------------\n";
	
	for(int radius = 1; radius <= 8; radius *= 2)
	{
		area = PI * radius * radius;
		
		cout << radius << "\t" << area << endl;
	}
	
	
	return 0;
}
