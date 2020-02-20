// Calories Burned

// Headers needed
#include <iostream>
using namespace std;

// Main function
int main()
{
	// Variables
	const double CALORIE = 3.9;
	double count,
		   total;
	
	for(count = 5; count <= 30; count += 5)
	{
		total = CALORIE * count;
		cout << "\nCalories burned for " << count << " minutes"
		     << ", burns a total of " << total << " calories.\n";
	}
	
	
	return 0;
}
