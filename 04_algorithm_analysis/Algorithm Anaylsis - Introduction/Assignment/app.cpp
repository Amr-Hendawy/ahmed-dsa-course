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
  for (int i = 0; i < size(marks); i++)
  {
    total += marks[i];
  }
  average = total / size(marks);

  return average;
}
int main()
{
  vector<int> marks{1, 2, 15, 15, 17, 11, 12, 17, 17, 14, 13, 15, 6, 11, 8, 7};
  cout << getaverage(marks);
  return 0;
}