/*
    Write a C++ Program to find the sum of the digits of a given number using while statements.
*/

#include <iostream>
using namespace std;

int main()
{
    int sum, n, rem;
    cout << "Enter the number: ";
    cin >> n;

    sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    cout << "The sum of the digits of a given number is: " << sum;
    return 0;
}

/*
    Output:
        Enter the number: 123
        The sum of the digits of a given number is: 6
*/