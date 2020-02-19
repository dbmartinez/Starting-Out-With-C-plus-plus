// Test Average

// Libraries needed
#include<iostream>
#include<iomanip>
using namespace std;

// Main function
int main()
{
	// Variables
	double score1, 
		   score2, 
		   score3, 
		   score4, 
		   score5,
		   result;
	
	// Display prompt to user
	cout << "\nEnter in 5 scores and I will average them: \n";
	cin >> score1 >> score2 >> score3 >> score4 >> score5;
	
	// Calculations
	result = (score1 + score2 + score3 + score4 + score5) / 5;
	
	// Display Results
	cout << fixed << left << setprecision(1);
	cout << "\nResults";
	cout << "\n===========\n";
	cout << "Score1: " << score1 << endl;
	cout << "Score2: " << score2 << endl;
	cout << "Score3: " << score3 << endl;
	cout << "Score4: " << score4 << endl;
	cout << "Score5: " << score5 << endl;
	cout << "Average: " << result << endl;
	
	return 0;
}
