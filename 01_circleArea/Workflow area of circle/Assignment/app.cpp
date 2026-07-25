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
float calculatesd(float data[])
{
  float sum = 0, mean = 0.0, numerator_result = 0.00;
  for (int i = 0; i < 10; i++)
  {
    sum += data[i];
  }
  mean = sum / 10;
  for (int i = 0; i < 10; i++)
  {
    numerator_result = (data[i] - mean) * (data[i] - mean);
  }
  return sqrt(numerator_result / 10);
}
int main()
{

  float data[10];
  cout << "enter the individual numbers: ";
  for (int i = 0; i < 10; i++)
  {
    cin >> data[i];
  }
  cout << "standard deviation" << calculatesd(data);
}
