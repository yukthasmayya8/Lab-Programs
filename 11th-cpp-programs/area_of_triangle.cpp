/*
    Write a C++ Program to find the area of a triangle of given three sides.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, s, A;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    s = (a + b + c) / 2.0;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is: " << A;
    return 0;
}

/*
    Output:
        Enter the three sides of the triangle: 2 2 2
        The area of the triangle is: 1.782051
*/