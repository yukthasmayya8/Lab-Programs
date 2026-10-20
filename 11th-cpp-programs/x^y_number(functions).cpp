/*
    Write a C++ Program to find x^y using functions.
*/

#include <iostream>
using namespace std;

int main()
{
    float pow(float, int);
    int y;
    float x, p;
    cout << "Enter the base and exponent value: ";
    cin >> x >> y;

    p = pow(x, y);
    cout << x << " to the power " << y << " is: " << p << endl;
    return 0;
}

float pow(float a, int b)
{
    if (a == 0)
        return 0;
    else if (b == 0)
        return 1;
    else if (b > 0)
        return (a * pow(a, b - 1));
    else
        return (1 / pow(a, -b));
}

/*
    Output:
        Enter the base and exponent value: 2 3
        2 to the power 3 is: 8

        Enter the base and exponent value: 2 -3
        2 to the power -3 is: 0.125

        Enter the base and exponent value: 0 3
        0 to the power 3 is: 0

        Enter the base and exponent value: 2 0
        2 to the power 0 is: 1
*/