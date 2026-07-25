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

void sort(int num[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = num[i];
    int j = i - 1;
    for (j; j >= 0; j--)
    {
      if (j >= 0 && num[j] > key)
      {
        num[j + 1] = num[j];
      }
      else
      {
        break;
      }
      num[j] = key;
    }
  }
}

void print(int num[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << num[i] << " ";
  }
}

int main()
{
  int num[] = {5, 1, 7, 2, 9, 3};
  int n = sizeof(num) / sizeof(num[0]);
  sort(num, n);
  print(num, n);
  return 0;
}