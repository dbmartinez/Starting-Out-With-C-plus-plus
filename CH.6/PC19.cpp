// Using Files - Hospital Report

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;

string validation();
void inPatient();
void outPatient();
double calc(int, double, double, double);
double calc(double, double);
double lessThanZero(double);

int main()
{
  char repeat;
  string input;

  do
    {
      input = validation();

      if(input == "inpatient")
	inPatient();

      else
	outPatient();

      cout << "\nWould you like to repeat the program(y/n): ";
      cin >> repeat;
      system("clear");

      if(toupper(repeat) != 'Y')
	cout << "\nThank you for choosing Gotham General." << endl << endl;

    }while(toupper(repeat) == 'Y');

  return 0;
}

// check to see if user correctly inputted
// the correct string
string validation()
{
  string input;

  cout << "\nGotham General";
  cout << "\n--------------";

  cout << "\n\nIs the patient an inpatient or an outpatient?: ";
  cin >> input;

  while(input != "inpatient" && input != "outpatient")
    {
      cout << "\nError!!!!";
      cout << "\nPlease enter inpatient or outpatient: ";
      cin >> input;
    }

  return input;
}

// user input for inpatient
void inPatient()
{
  ofstream outFile;
  int days;
  double dailyRate, services, medicine, result;
  outFile.open("Hospitalbill.txt");

  cout << "\nInpatient Menu";
  cout << "\n--------------";
  cout << "\n\nEnter in the number of days spent in the hospital: ";
  cin >> days;
  days = lessThanZero(days);

  cout << "Enter in the daily rate: $";
  cin >> dailyRate;
  dailyRate = lessThanZero(dailyRate);

  cout << "Enter in charges for hospital services(lab tests, etc.): $";
  cin >> services;
  services = lessThanZero(services);

  cout << "Enter hospital medication charges: $";
  cin >> medicine;
  medicine = lessThanZero(medicine);

  result = calc(days, dailyRate, services, medicine);

  // display result
  cout << fixed<< showpoint <<setprecision(2);
  outFile << "\nHospital Charges";
  outFile << "\n----------------";
  outFile << "\nAmount: $" << result << endl;

  outFile.close();
}

// user input for outpatient 
void outPatient()
{
  ofstream outFile;
  double services, medicine, result;
  outFile.open("HospitalBill.txt");

  cout << "\nOutpatient Menu";
  cout << "\n---------------";

  cout << "\n\nEnter in charges for hospital services(lab tests, etc.): $";
  cin >> services;
  services = lessThanZero(services);

  cout << "Enter hospital medication charges: $";
  cin >> medicine;
  medicine = lessThanZero(medicine);

  result = calc(services, medicine);

  // display results
  cout << fixed << showpoint << setprecision(2);
  outFile << "\nHospital Charges";
  outFile << "\n----------------";
  outFile << "\nAmount: $" << result << endl;

  outFile.close();
}

// calculation for inpatient
double calc(int days, double dailyRate, double services, double medicine)
{
  double result;

  result = days * dailyRate + services + medicine;

  return result;
}

// calculation for outpatient
double calc(double services, double medicine)
{
  double result;

  result = services + medicine;

  return result;
}

// if user enters number less than zero
double lessThanZero(double input)
{
  while(input < 0)
    {
      cout << "\nError: cannot be less than zero..";
      cout << "\nRe-enter information: ";
      cin >> input;
    }  

  return input;
}
