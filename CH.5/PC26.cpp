//Total and Average Rainfall

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main ()
{
	//Variables
	ifstream inputFile;
	string amonth, bmonth,
		   fileName = "Rainfall.txt";
	double val, total = 0, avg, c = 0;
	
	//Input file Rainfall.txt
	inputFile.open(fileName.c_str());
	
	//Using if statment to see if file exists
	if (!inputFile)
	{
		//Statement if file cannot be found
		cout << "Rainfall.txt file cannot be found in folder\n";
		cout << "Please insert Rainfall.txt file in the folder\n";
		exit(0);
	}
	
	//city names from Rainfall.txt
	inputFile >> amonth;
	inputFile >> bmonth;
	
	//While loop displays the Rainfall.txt
	while (inputFile >> val)
	{
		//Calculating the total 
		total += val;
		c++;
	}
	
	//Calculating average
	avg = total / c;
	
	cout << "\t\t\t\tTotal and Average Rainfall\n";
	cout << "\t\t\t\t__________________________\n\n";
	cout << "During the months of " << amonth << "-" << bmonth;
	cout << ", the total rainfall was inches and the average " << total;
	cout << " inches and the average\n";
	cout << "monthly rainfall was ";
	cout << avg << " inches\n" << endl;
	
	inputFile.close();
	system("pause");
	return 0;
}
