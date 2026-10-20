/*
    Write a C++ Program to input principal amount, rate of interest and time period and calculate the compound interest.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float p, r, t, CI;
    cout << "Enter the principal amount, rate of interest, timeperiod: ";
    cin >> p >> r >> t;

    CI = p * pow(1 + r / 100, t) - p;

    cout << "The compound interest is: " << CI;
    return 0;
}
