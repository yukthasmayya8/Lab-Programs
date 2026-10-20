/*
    Write a C++ Program to check whether a given number is an Armstrong number or not.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum, n, rem, n, t;
    cout << "Enter the number: ";
    cin >> n;

    sum = 0;
    t = n;
    do
    {
        rem = t % 10;
        sum = sum + rem * rem * rem;
        t = t / 10;
    } while (t != 0);

    if (sum == n)
        cout << n << " is an Amstrong number";
    else:
        cout << n << " is not an Amstrong number";
    return 0;
}
