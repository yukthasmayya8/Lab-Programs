/*
    Write a C++ program to create a class with data members a, b, c and member functions to input data, calculate the discriminant based on the following conditions and print the roots.
    a) If the discriminant is greater than 0, the roots are real and distinct.
    b) If the discriminant is equal to 0, the roots are real and equal.
    c) If the discriminant is less than 0, the roots are imaginary.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
using namespace std;

class quad
{
private:
    double a, b, c, d, r1, r2;

public:
    void get();
    void find();
    void put();
};

void quad::get()
{
    cout << "Enter the coefficients: ";
    cin >> a >> b >> c;
}

void quad::find()
{
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << "The roots are equal." << endl;
        r1 = -b / (2 * a);
        r2 = r1;
    }
    else if (d > 0)
    {
        cout << "The roots are real and distinct." << endl;
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
    }
    else
    {
        cout << "The roots are imaginary." << endl;
        exit(0);
    }
}

void quad::put()
{
    cout << "The first root is: " << r1 << endl;
    cout << "The second root is: " << r2 << endl;
}

int main()
{
    quad q;
    q.get();
    q.find();
    q.put();
    return 0;
}

/* 
    Output:
        Enter the coefficients: 1 -5 6
        The roots are real and distinct.
        The first root is: 3
        The second root is: 2

        Enter the coefficients: 1 -4 4
        The roots are equal.
        The first root is: 2
        The second root is: 2

        Enter the coefficients: 1 2 3
        The roots are imaginary.
*/