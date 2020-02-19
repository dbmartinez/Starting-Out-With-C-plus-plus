// Male and Female Percentages

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	double males, females, total, totalMale, totalFemale;
	const double PERCENT = 100;
	
	// User input for males
	cout << "\nHow many male students in the class: ";
	cin >> males;
	
	// User input for females
	cout << "How many female students in the class: ";
	cin >> females;
	
	// Calculations
	total = males + females;
	totalMale = (males / total) * PERCENT;
	totalFemale = (females / total) * PERCENT;
	
	// Results
	cout << fixed << showpoint << setprecision(2);
	cout << "\nThere is " << totalMale << "% male students and " << totalFemale;
	cout << "% female students in the classroom." << endl;
	
	return 0;
}
