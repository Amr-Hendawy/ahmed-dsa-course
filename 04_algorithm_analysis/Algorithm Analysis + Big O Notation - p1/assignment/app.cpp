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

vector<int> trabanucci(vector<int> signature, int n)
{
  vector<int> result;
  if (n == 0)
  {
    return result;
  }

  if (n <= 3)
  {
    for (int i = 0; i < n; i++)
    {
      result.push_back(signature[i]);
    }
    return result;
  }

  result = signature;

  while (result.size() < n)
  {
    int size = result.size();
    int next = result[size - 1] + result[size - 2] + result[size - 3];
    result.push_back(next);
  } /// thats if the n is big so that the result can keep growing until it reaches it

  return result;
}

int main()
{
  vector<int> signature{1, 1, 1};
  vector<int> result = trabanucci(signature, 10);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }

  return 0;
}