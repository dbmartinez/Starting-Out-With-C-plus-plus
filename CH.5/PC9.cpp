// Weight Loss

#include<iostream>
using namespace std;

int main()
{
	
	int weight;
	
	cout << "\nEnter in your starting weight: ";
	cin >> weight;
	
	cout << "\nMonth\tWeight";
	cout << "\n--------------\n";
	
	for(int month = 1; month <= 6; month++)
	{
		weight -= 4;
		cout << month << "\t" << weight << endl;
	}
	
	return 0;
}
