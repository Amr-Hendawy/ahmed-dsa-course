#include <iostream>
#include <cstdlib>
#include <climits>
#include <string>
#include <array>
#include <string.h>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int getaverage(vector<int> marks)
{
  int total = 0;
  int average = 0;

  for (int i = 0; i < marks.size(); i++)
  {
    total += marks[i];
  }
  average = total / marks.size();

  return average;
}

int main()
{
  int n;
  cout << "Enter the number of marks: ";
  cin >> n;

  vector<int> marks;
  for (int i = 0; i < n; i++)
  {
    int mark;
    cout << "Enter mark " << i + 1 << ": ";
    cin >> mark;
    marks.push_back(mark);
  }

  cout << "Average mark: " << getaverage(marks) << endl;
  return 0;
}

