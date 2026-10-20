/*
    Write a C++ Program to convert the number of days into years, months and days.
*/

#include <iostream>
using namespace std;

int main()
{
    int td, y, m, d;
    cout << "Enter the number of days: ";
    cin >> td;

    y = td / 365;
    td = td % 365;
    m = td / 30;
    d = td % 30;

    cout << "The number of years is: " << y << endl;
    cout << "The number of months is: " << m << endl;
    cout << "The number of days is: " << d;
    return 0;
}

/* Output:
    Enter the number of days: 400
    The number of years is: 1
    The number of months is: 1
    The number of days is: 5
*/