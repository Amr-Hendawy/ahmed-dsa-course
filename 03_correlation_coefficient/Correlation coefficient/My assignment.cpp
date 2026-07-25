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
    int N = 0, cov = 0, devx = 0, devy = 0, squarex = 0, i = 0, squarey = 0;
    double Averagex = 0, Averagey = 0;
    cin >> N;
    int X[100];
    int Y[100];
    for (i = 0; i < N; i++)
    {
        cout << "Enter x";
        cin >> X[i];
        cout << "Enter y";
        cin >> Y[i];
        Averagex += X[i];
        Averagey += Y[i];
    }
    double meanx = Averagex / N;
    double meany = Averagey / N;

    for (i = 0; i < N; i++)
    {
        devx += X[i] - meanx;
        devx += Y[i] - meany;
        cov += devx * devy;
    }

    cout << "cov is ; " << cov;
    return 0;
}