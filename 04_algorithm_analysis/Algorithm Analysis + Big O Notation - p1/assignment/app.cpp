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
// this is the side equation that provide the main equation with the result
{
  vector<int> result;
  // defining a vector of integers with the name result to store the result of the trabanucci fucntion
  if (n == 0)
  {
    return result;
  }
  // if the n is equal to 0 then return the result array which is empty

  if (n <= 3)
  {
    for (int i = 0; i < n; i++)
    {
      result.push_back(signature[i]);
    }
    return result;
  }
  //if n is lesser than or equal than 3 then return only the fist 3
  // 3 elements of the signature array which is 1,1,1
  // if n is greater than 3 then go on to the while equation to keep 
  // adding the next element of the array until it reaches n

  result = signature;

  while (result.size() < n)
  // keep doing this if the size of the result array is lesser than n
  {
    int size = result.size();
    // defining a variable size to store the size of the result array
    int next = result[size - 1] + result[size - 2] + result[size - 3];
    // cycle through the result array and add the last 3 elements 
    // of the result array to get the next element of the result array
    result.push_back(next);
    // push the next element to the result array
  } 
  return result;
}

int main()
// main equation 
{
  vector<int> signature{1, 1, 1};
  // forming a vector of integers with the name of signature
  vector<int> result = trabanucci(signature, 10);
  // making a vector of integers with
  //  the name result to store the result of the trabanucci fucntion
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
  }
  // making a for loop to print the result array one by one with
  // a max limit of the result.size() which is the size of the result array

  return 0;
}