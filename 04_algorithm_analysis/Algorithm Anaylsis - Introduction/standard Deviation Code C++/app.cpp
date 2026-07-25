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


int rhombusArea(int d1, int d2) {
  float half = 0.5;
  int result = (d1 * d2) / half;
  return result;
}

// int trapezoidArea(int line1, int line2, int height) {
//   float half = 0.5;
//   int result = (line1 + line2) / 2 * height;
//   return result;
// }


int main()
{

  if (cin.fail()) {
    cout << "Invalid Input!"
  };
  
  int d1,d2;
  cin >> d1;
  cin >> d2;
  
  cout << "calculating the rhombus area \n" << rumbuxArea(d1,d2) << "\n";
  // cout << "calculating the rhombus area \n" << trapezoidArea(5,7,4) << "\n";
  

  return 0;
}