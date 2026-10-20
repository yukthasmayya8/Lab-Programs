/*
    Write a C++ Program to interchange the values of two variables without using a temporary variable.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Values after interchanging: a = " << a << " and b = " << b;

    return 0;
}

/*
    Output:
        Enter two values: 10 20
        Values after interchanging: a = 20 and b = 10
*/