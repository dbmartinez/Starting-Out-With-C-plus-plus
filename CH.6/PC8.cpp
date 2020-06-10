// Lowest Score Drop

#include<iostream>
using namespace std;

void getScore(int&);
void getcalcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int); 

int main()
{
  int lowest;
  int test_score1,
      test_score2,
      test_score3,
      test_score4,
      test_score5;

  cout << endl;
  getScore(test_score1);
  getScore(test_score2);
  getScore(test_score3);
  getScore(test_score4);
  getScore(test_score5);
  getcalcAverage(test_score1, test_score2, test_score3, test_score4, test_score5);
  lowest = findLowest(test_score1, test_score2, test_score3, test_score4, test_score5);
  cout << "\nLowest: " << lowest << endl;

  return 0;
}

// get test scores from user
void getScore(int& test_score)
{
  cout << "Enter in test score: ";
  cin >> test_score;
  
  while(test_score < 0 || test_score > 100)
    {
      cout << "\nError: Re-enter in test score: ";
      cin >> test_score;
    }
}

// calculate average
void getcalcAverage(int test_score1, int test_score2, int test_score3, int test_score4, int test_score5)
{
  int average, scores;

  scores = findLowest(test_score1, test_score2, test_score3, test_score4, test_score5);

  average = (test_score1 + test_score2 + test_score3 + test_score4 + test_score5 - scores) / 4;
  cout << "\nAverage: " << average;
}

// find the lowest test score
int findLowest(int test_score1, int test_score2, int test_score3, int test_score4, int test_score5)
{
  int min, max;
  min = max = test_score1;

  if(test_score1 < min)
    {
      min = test_score1;
    }

  if(test_score2 < min)
    {
      min = test_score2;
    }
  
  if(test_score3 < min)
    {
      min = test_score3;
    }

  if(test_score4 < min)
    {
      min = test_score4;
    }

  if(test_score5 < min)
    {
      min = test_score5;
    }

  return min;
}
