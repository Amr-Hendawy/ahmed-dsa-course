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

// void calc(int n1, int n2)
// {
//   cout
//       << n1 + n2 << "\n";
// }

// int calc(int n1, int n2)
// {
//   cout << "Operation Is Done\n";
//   return n1 + n2; // here you are not returning a number like the void one you are doing a calculate stage the return
//                   // of the number is going to be in the int main()
//                   // this function merely returns the value of the calculation of n1+n2 and you get to do with it stuff int eh main
//                   // function
//   cout << "this isnt going to show up anywhere because it was printed after the return";
//   // you can use the return as a break in the void
// }
// int main()
// {
//   // calc(10, 20);
//   int result = calc(10, 20); // so having a void function doesnt allow you to use it in other variables
//   // but it can only print it unlike normal functions that can be used for different purposes
//   // we storing the value of the calc equation in a variable called result
//   cout << result * 5 << "\n";
//   cout << result + 20 << "\n";
//   return 0;
// }

// main function has to return an integer

// declaration

// int calc(int a, int b); // that is called forward declaration
// // meaning that this is a function that i will define later maybe in teh same file or in another one later
// // you can call the function and add it later in any place without any errors.

// int main()
// {
//   // call
//   cout << calc(10, 20);
//   return 0;
// }

// int calc(int a, int b)
// {
//   return a + b;
// }

// // you cannot put the main before the function as it will produce an error, you form the function then
// // call it thats the normal but you dont call something that isnt there

// int main()
// {
//   cout << pow(2, 6) << "\n";     // 16 this is ready made shortcut
//   cout << 2 * 2 * 2 * 2 << "\n"; // 16 same thing as the one above
//   cout << 11 % 2 << "\n";        // keep in mind that $ modulos doesnt accept 11.5
//   cout << fmod(11.5, 2) << "\n"; // using this shortcut equation makes you capable of using modulo on even 11.5
//   cout << ceil(9.1) << "\n";     // 10
//   cout << floor(9.5) << "\n";    // 10
//   cout << round(9.4) << "\n";    // 9
//   cout << trunc(9.9) << "\n";    // 9
//   cout << trunc(9.5) << "\n";    // 9
//   cout << trunc(9.1) << "\n";    // 9
//   return 0;
// }
#include <cctype>
// int main()
// {
//   cout << "A\n";                // will return to you A
//   cout << tolower('A') << "\n"; // will return to you 97 which is the ASCII value of 'a'
//   cout << char(tolower('A'));   // this produces the letter 'a'
//   cout << "===============\n";

//   cout << "B\n";                // will return to you A
//   cout << toupper('b') << "\n"; // will return to you 66 which is the ASCII value of 'B'
//   cout << char(toupper('b'));   // this produces the letter 'B'
//   cout << "===============\n";

//   string nameone = "ElZEro";
//   int nameoneSize = size(nameone);
//   for (int i = 0; i < nameoneSize; i++)
//   {
//     if (isupper(nameone[i]))
//     {
//       cout << char(tolower(nameone[i])) << "\n"; // so this basically shows up the char and then tolower converts it to int
//       // which converts it to ascii value
//     }
//     else
//     {
//       cout << char(toupper(nameone[i])) << "\n"; // so this basically shows up the char and then toupper converts it to int
//       // which converts it to ascii value
//     }

//     // cout << nameone[i] << "\n";      // prints out the letter
//     // cout << int(nameone[i]) << "\n"; // prints out the ASCII number
//   }

//   cout << "\n===============\n";

//   string nametwo = "E\nl  z \n\te r\t\to";
//   int nametwoSize = size(nametwo);

//   for (int i = 0; i < nametwoSize; i++)
//   {
//     // if (nametwo[i] == ' ')
//     // {
//     //   continue; // this removes spaces only but it doesnt take into consideration teh tabs and other things
//     // }

//     if (isspace(nametwo[i]))
//     {
//       continue; // this removes teh backspaces and the tabs isspace checks if there is a space and continue
//       // leaves skips teh space
//     }

//     cout << nametwo[i];
//   }

//   return 0;
// }
// #include <algorithm>
// int main()
// {
//   cout << min(10, -20) << "\n";                       //-20
//   cout << min(10, 20) << "\n";                        // 10
//   cout << min('a', 'c') << "\n";                      // a
//   cout << min('a', 'C') << "\n";                      // C the ASCII value for the C is below that of the a
//   cout << int('a') << "\n";                           // 97
//   cout << int('C') << "\n";                           // 67
//   cout << min({10, -20, 30, -100, 100, -50}) << "\n"; //-100
//   cout << "================================\n";
//   cout << max(10, -20) << "\n";                       //-20
//   cout << max(10, 20) << "\n";                        // 10
//   cout << max('a', 'c') << "\n";                      // a
//   cout << max('a', 'C') << "\n";                      // C the ASCII value for the C is below that of the a
//   cout << int('a') << "\n";                           // 97
//   cout << int('C') << "\n";                           // 67
//   cout << max({10, -20, 30, -100, 100, -50}) << "\n"; //-100

//   cout << "================================\n";

//   int nums[] = {10, -20, 30, -100, 100, -50};
//   int numsSize = size(nums);
//   int checkMinNum = 0;
//   for (int i = 0; i < numsSize; i++)
//   {
//     if (nums[i] < checkMinNum)
//     {
//       checkMinNum = nums[i]; // so this keeps on checking whether the num[i] is lesser than zero and keeps on assigning
//       // the number to checkMinNum
//       // so first the checkMinNum remains zero then a check happens again and it becomes -20
//       // then a check happens again and it remains -20
//       // a check happens again and it becomes -100
//       // checks happens again but nothing changes again becauuse -100 is the least number checkMinNum is -100
//       // and nothing is lesser than the -100 in that whole array
//       // you can change the < to > to reverse the outcome
//       // this whole exercise is to show you that you can do the min max shortcut using your own methods
//     }
//   }
//   cout << checkMinNum << "\n";
//   cout << "========================\n";

//   int numsTwo[] = {10, 20, 10, 10, 13, 15, 100, 20};
//   int numsTwoSize = size(numsTwo);
//   int numcount = 0;
//   int choosenNum = 10;
//   for (int i = 0; i < numsTwoSize; i++)
//   {
//     if (numsTwo[i] == choosenNum)
//     {
//       numcount++;
//     }
//   }
//   cout << numcount << "\n"; // this resemles what done in the shortcut count but manually made

//   return 0;
// }

// void print(int a, int b)
// {
//   cout << "Number One Is: " << a << "\n";
//   cout << "Number Two Is: " << b << "\n";
// }
// void print(int a, int b, int c)
// {
//   cout << "Number One Is: " << a << "\n";
//   cout << "Number Two Is: " << b << "\n";
//   cout << "Number Three Is: " << c << "\n";
// }

// void print(string a, int b) // thats an overloaded function meaning that there are two more variations to it
// // function print has two more
// // you can add more arguments or different ones but eventually you will print
// {
//   cout << "Text One Is: " << a << "\n";
//   cout << "Text Two Is: " << b << "\n";
// }
// int main()
// {
//   print(10, 20);
//   print(100, 200, 300); // once you add a 3rd parameter like equation number two it will automatically select option 2
//   print("Ahmed", 10);   // we changed the type of the input here so it automatically select the 3rd equation
//   return 0;
// }

// int add(int num)
// {
//   if (num == 0)
//   {
//     return 0;
//   }
//   cout << num << "\n";
//   cout << "================\n";
//   return num + add(num - 1);
// }

// int main()
// {

//   cout << add(5);
//   return 0;
// }

int main()
{

  cout << "calculating the rhombus area \n";
  int A, d1, d2 = 0;
  d1 = 6;
  d2 = 8;
  A = (d1 * d2) / 2;
  cout << A << "\n";

  cout << "======================separate \n";
  cout << "calculating the trapezoid area \n";
  int B, b, c, h = 0;
  b = 14;
  c = 10;
  h = 4;
  B = (b + c) / 2 * h;

  cout << B << "\n";

  return 0;
}