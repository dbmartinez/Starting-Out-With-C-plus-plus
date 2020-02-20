// Characters for the ASCII Codes
#include <iostream>
using namespace std;

int main()
{
	char a;
	
	for(int i = 32; i <= 127; i++)
	{
		a = i;
		cout << a << " ";
		
		if(i % 16 == 0)
			cout << endl;
	}

	return 0;
}
