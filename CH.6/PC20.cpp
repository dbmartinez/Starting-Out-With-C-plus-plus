// Using Files - Travel expenses

#include<iostream>
#include<iomanip>
#include<cctype>
#include<fstream>
#include<cstdlib>
using namespace std;

// function protoypes
int dayOnTrip();
double departure();
double arrival();
double roundTripAirfare();
double carRental();
double milesDriven();
double parkingFee(int);
double taxiFee(int);
double registrationFee();
double hotelExpense(int);
double meal(double, double);
double lessThanZero(double);
double calc(int, double, double, double, double, double, double, double, double, double, double);

int main()
{
  char repeat, choice;
  int trip, miles;
  double roundTrip, rental, hotelEx;
  double fee1, fee2, fee3, mealCost;
  double departed, arrived;

  do
    {
      cout << "\nWolf Industries";
      cout << "\n---------------";
      cout << "\n\nTravel expenses report";
      trip = dayOnTrip();
      departed = departure();
      arrived = arrival();
      roundTrip = roundTripAirfare();
      
      cout << "\nAre you using a personal vehicle(y/n): ";
      cin >> choice;

      while(toupper(choice) != 'N' && toupper(choice) != 'Y')
	{
	  cout << "\nError: y for yes and n for no.";
	  cout << "\nAre you using a personal vehicle(y/n): ";
	  cin >> choice;
	}

      if(toupper(choice) == 'N')
	{
	  rental = carRental();

	  if(rental > 0)
	    {
	      fee1 = parkingFee(trip);
	    }

	  else if(rental == 0)
	    fee2 = taxiFee(trip);
	}

      else if(toupper(choice) == 'Y')
	miles = milesDriven();

      fee3 = registrationFee();
      hotelEx = hotelExpense(trip);
      mealCost = meal(arrived, departed);

      calc(trip, departed, arrived, roundTrip, rental, fee1, fee2, fee3, miles, hotelEx, mealCost);

      cout << "\nRepeat Program(y/n): ";
      cin >> repeat;

      if(toupper(repeat) != 'Y')
	{
	  cout << "\nHave a great day...\n\n";
	  exit(0);
	}

    }while(toupper(repeat) == 'Y');

  return 0;
}

// days on trip 
int dayOnTrip()
{
  int trip;

  cout << "\nHow many days were spent on this trip: ";
  cin >> trip;

  while(trip < 1)
    {
      cout << "\nError: cannot be less than one.";
      cout << "\nHow many days were spent on this trip: ";
      cin >> trip;
    }

  return trip;
}

// flights departing times
double departure()
{
  double departure;

  cout << "\nEnter flights time as a decimal(ex: 1.34)";
  cout << "\nUse military time, don't exceed 24 for time\n";
  cout << "\nEnter in the flights departures time: ";
  cin >> departure;
  
  departure = lessThanZero(departure);

  while(departure > 24)
    {
      cout << "Error: time cannot exceed 24";
      cout << "\nRe-enter flights departures time: ";
      cin >> departure;
    }

  return departure;
}

// flights arriving times
double arrival()
{
  double arrival;

  cout << "Enter in the flights arrivals time: ";
  cin >> arrival;

  arrival = lessThanZero(arrival);

  while(arrival > 24 && arrival > 0.60)
    {
      cout << "Error: time cannot exceed 24";
      cout << "\nRe-enter flights arrival time: ";
      cin >> arrival;
    }
  
  return arrival;
}

// obtain any round trip fares
double roundTripAirfare()
{
  double airfare;

  cout << "Enter in the round trip airfare: ";
  cin >> airfare;

  airfare = lessThanZero(airfare);

  return airfare;
}

// collect any car rental fees
double carRental()
{
  double rental;

  cout << "Enter in the amount of car rental: ";
  cin >> rental;

  rental = lessThanZero(rental);

  return rental;
}

// collecting amount of miles driven if driving alone
double milesDriven()
{
  double vehicleAllowance = 0.58;
  double miles;

  cout << "How many miles were driven: ";
  cin >> miles;

  miles *= vehicleAllowance;

  return miles;
}

// collecting any parking fees
double parkingFee(int trip)
{
  int parkingPerDay = 12;
  double fee, calcFee;

  cout << "Enter in any parking fees: ";
  cin >> fee;

  fee = lessThanZero(fee);

  calcFee = trip * parkingPerDay;

  if(fee > calcFee)
    {
      cout << "\n!!You must pay for the excess of parking fees!!" << endl;
      fee -= calcFee;

      return fee;
    }

  else
    return fee = 0;
}

// collect any taxi fees
double taxiFee(int trip)
{
  int taxiPerDay = 40;
  double fee, calcFee;

  cout << "Enter in any taxi fees: ";
  cin >> fee;

  fee = lessThanZero(fee);

  calcFee = trip * taxiPerDay;

  if(fee > calcFee)
    {
      cout << "\n!!You must pay for the excess of taxi fees!!" << endl;
      fee -= calcFee;

      return fee;
    }

  else
    return fee = 0;
}

// collect any conference/registration fees
double registrationFee()
{
  double fee;

  cout << "Enter in any conference/registration fees: ";
  cin >> fee;

  fee = lessThanZero(fee);

  return fee;
}

// collect hotel fees
double hotelExpense(int trip)
{
  int hotelPerDay = 90;
  double expense, calcFee;

  cout << "Enter in any hotel expenses: ";
  cin >> expense;
  
  expense = lessThanZero(expense);

  calcFee = trip * hotelPerDay;

  if(expense > calcFee)
    {
      cout << "\n!!You must pay for the excess of hotel fees!!" << endl;
      expense -= calcFee;

      return expense;
    }

  else
    return expense = 0;
}

// collect meal fees
double meal(double arrived, double departed)
{
  int breakfast = 18;
  int lunch = 12;
  int dinner = 20;
  double mealCost, newMealCost;

  cout << "Enter in the cost of allowable meals: ";
  cin >> mealCost;

  mealCost = lessThanZero(mealCost);

  if(departed > 0 && departed <= 7)
    {
      newMealCost = mealCost - breakfast;

      if(arrived >= 8 && arrived < 13)
	newMealCost -= breakfast;

      else if(arrived >= 13 && arrived < 19)
	newMealCost -= lunch;

      else if(arrived >= 19 && arrived < 24)
	newMealCost -= dinner;

      return newMealCost;
    }

  else if(departed > 7 && departed <= 12)
    {
      newMealCost = mealCost - lunch;

      if(arrived >= 8 && arrived < 13)
        newMealCost -= breakfast;

      else if(arrived >= 13 && arrived < 19)
        newMealCost -= lunch;

      else if(arrived >= 19 && arrived < 24)
        newMealCost -= dinner;

      return newMealCost;
    }

  else if(departed > 12 && departed <= 18)
    {
      newMealCost = mealCost - dinner;

      if(arrived >= 8 && arrived < 13)
        newMealCost -= breakfast;

      else if(arrived >= 13 && arrived < 19)
        newMealCost -= lunch;

      else if(arrived >= 19 && arrived < 24)
        newMealCost -= dinner;

      return newMealCost;
    }

  if(mealCost == 0)
    return newMealCost = 0;
}

// check for negative numbers
double lessThanZero(double input)
{
  while(input < 0)
    {
      cout << "\nError: cannot be a negative number.";
      cout << "\nRe-enter information";
      cin >> input;
    }

  return input;
}

// calculations and result
double calc(int trip, double departed, double arrived, double roundTrip, double rental, double fee1, double fee2, double fee3, double miles, double hotelEx, double mealCost)
{
  ofstream outFile;
  outFile.open("PC20.txt");
  double totalCost;

  outFile << fixed << showpoint << setprecision(2);
  //results
  outFile << "\n\tResults";
  outFile << "\n\t-------";
  outFile << "\nDays on Trip:                 " << trip;
  outFile << "\nFlight Departed:              " << departed;
  outFile << "\nFlight Arrival:               " << arrived;
  outFile << "\nRound Trip Airfare:          $" << roundTrip;

  // results with car rental
  if(rental >= 1)
    {
      outFile << "\nCar Rental Cost:             $" << rental;
      outFile << "\nParking Charges:             $" << fee1;
      outFile << "\nConfererce/Registration Fee: $" << fee3;
      outFile << "\nHotel Expenses:              $" << hotelEx;
      outFile << "\nFlight Meal Cost:            $" << mealCost;

      // calculation                                            
      totalCost = roundTrip + rental + fee1 + fee3 + hotelEx + mealCost;
    }

  // results with taxi
  if(rental == 0)
    {
      outFile << "\nTaxi Fee:                    $" << fee2;
      outFile << "\nConfererce/Registration Fee: $" << fee3;
      outFile << "\nHotel Expenses:              $" << hotelEx;
      outFile << "\nFlight Meal Cost:            $" << mealCost;

      // calculation
      totalCost = roundTrip + fee2 + fee3 + hotelEx + mealCost;
    }

  // results drove personl vehicle
  if(miles > 0)
    {
      outFile << "\nMiles Driven:                $" << miles;
      outFile << "\nConfererce/Registration Fee: $" << fee3;
      outFile << "\nHotel Expenses:              $" << hotelEx;
      outFile << "\nFlight Meal Cost:            $" << mealCost;

      // calculation
      totalCost = roundTrip + fee3 + hotelEx + mealCost - miles;
    }

  outFile << "\n\nTotal Cost of Trip:          $" << totalCost;
  cout << endl;

  outFile.close();
}
