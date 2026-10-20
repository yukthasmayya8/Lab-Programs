/*
    Write a C++ program to find the area of square, rectangle and triangle using function overloading.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class ovd
{
private:
    float s;

public:
    double area(double a)
    {
        return a * a;
    }

    double area(double l, double b)
    {
        return l * b;
    }

    double area(double a, double b, double c)
    {
        s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main()
{
    ovd f;
    cout << "The area of square is: " << f.area(2.5) << endl;
    cout << "The area of rectangle is: " << f.area(2.5, 3.5) << endl;
    cout << "The area of triangle is: " << f.area(2.5, 3.5, 4.5) << endl;
    return 0;
}

/*
    Output:
        The area of square is: 6.25
        The area of rectangle is: 8.75
        The area of triangle is: 3.79967
*/