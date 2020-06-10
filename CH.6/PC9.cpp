// Star Search

#include<iostream>
#include<iomanip>
using namespace std;

void getJudgeData(double&);
double calcScore(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);

int main()
{
  double score, score1, score2, score3, score4, score5, result;

  cout  << fixed << showpoint << setprecision(2);
  cout << endl;
  getJudgeData(score1);
  getJudgeData(score2);
  getJudgeData(score3);
  getJudgeData(score4);
  getJudgeData(score5);

  score = calcScore(score1, score2, score3, score4, score5);

  cout << "\n\nAverage Score";
  cout << "\n-------------";
  cout << "\nScore: " << score << endl << endl;

  return 0;
}

//
void getJudgeData(double& score)
{
  cout << "Enter score: ";
  cin >> score;

  while(score < 0 && score > 100)
    {
      cout << "\nError: score must be betweeon 0 - 100";
      cout << "\nRe-enter score: ";
      cin >> score;
    }
}

//
double calcScore(double score1, double score2, double score3, double score4, double score5)
{
  double score, lowest, highest;

  lowest = findLowest(score1, score2, score3, score4, score5);
  highest = findHighest(score1, score2, score3, score4, score5);

  score = ((score1 + score2 + score3 + score4 + score5) - highest - lowest) / 3;

  cout << "\nScores dropped";
  cout << "\n--------------";
  cout << "\nHighest Score: " << highest;
  cout << "\nLowest Score: " << lowest;

  return score;
}

//
int findLowest(double score1, double score2, double score3, double score4, double score5)
{
  int min;

  min = score1;
  
  if(score1 < min)
    {
      min = score1;
    }

  if(score2 < min)
    {
      min = score2;
    }
  
  if(score3 < min)
    {
      min = score3;
    }

  if(score4 < min)
    {
      min = score4;
    }

  if(score5 < min)
    {
      min = score5;
    }

  return min;
}

//
int findHighest(double score1, double score2, double score3, double score4, double score5)
{
  int max;

  max = score1;

  if(score1 > max)
    {
      max = score1;
    }

  if(score2 > max)
    {
      max = score2;
    }

  if(score3 > max)
    {
      max = score3;
    }

  if(score4 > max)
    {
      max = score4;
    }

  if(score5 > max)
    {
      max = score5;
    }

  return max;
}
