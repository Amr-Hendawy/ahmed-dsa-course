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
    // assign the 2nd number in an array to the variable key
    int j = i - 1;
    // assign the 1st index in an array to the variable j
    for (j; j >= 0;)
    // if j is still inside the array and the current element is greater than key
    {
      if (j >= 0 && num[j] > key)
      // if the first number is bigger than 0 and its bigger than the key itself
      {
        num[j + 1] = num[j];
        // shift the larger element one position to the right
      }
      else
      {
        break;
        // stop shifting because the element at num[j] is not greater than key
        // therefore key belongs immediately after num[j]
      }
      num[j] = key;
      // after you break put the key in the place of j so if the first j is negative and the key
      // is positive the key will be put in the place of j the first place
    }
  };
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
  int num[] = {5, 4, 1, 6, 7, 8};
  // declaring an array that needs to be sorted out
  int n = sizeof(num) / sizeof(num[0]);
  // to know the numbers in the array num
  sort(num, n);
  print(num, n);
  return 0;
}