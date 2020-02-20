// Membership Fees Increase

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout << "\nMembership Fee: $3,000\n";
	cout << "\nYear\tPrice\n";
	cout << "-------------\n";
	
	cout << fixed << showpoint << setprecision(2);
	for(double year = 1, member = 3000; year <= 5; year++, member++)
	{
		member = 0.03 * member + member;
		
		cout << static_cast<int>(year) << "\t$" << member << endl;
	}
	
	return 0;
}
