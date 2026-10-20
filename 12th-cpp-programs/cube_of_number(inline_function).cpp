/*
    Write a C++ program to find the cube of a number using inline function.
*/

#include <iostream>
#include <iomanip>
using namespace std;

inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int x, y;
    cout << "Enter the number: ";
    cin >> x;
    y = cube(x);
    cout << "The cube of " << x << " is: " << y;
    return 0;
}

/*
    Output:
        Enter the number: 5
        The cube of 5 is: 125
*/