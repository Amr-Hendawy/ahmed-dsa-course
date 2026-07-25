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

int main()
{
    int sd, numerator_result, b, i, N = 0;
    float ave, sum = 0;

    int x[100];
    cout << "How many items ?";
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> x[i];
        sum += x[i];
    }

    ave = sum / N;
    cout << "ave is: " << ave << "\n";
    for (i = 0; i < N; i++)
    {
        numerator_result += pow(2, x[i] - ave);
    }
    b = numerator_result / N;
    sd = sqrt(b);
    cout << "standard deviation is: " << sd << "\n";
    return 0;
}