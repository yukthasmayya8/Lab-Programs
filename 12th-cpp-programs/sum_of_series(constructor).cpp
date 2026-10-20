/*
    Write a C++ program to find the sum of series 1 + x + x^2 + x^3 + ... + x^n using constructors.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class sum
{
private:
    int x, n, s;

public:
    int cal();
    sum(int a, int b)
    {
        x = a;
        n = b;
        s = 1;
    }
};

int sum::cal()
{
    for (int i = 1; i <= n; i++)
        s = s + pow(x, i);
    return s;
}

int main()
{
    int x, n;
    cout << "Enter the base and exponent value: ";
    cin >> x >> n;
    sum s(x, n);
    cout << "The sum of the series is: " << s.cal();
    return 0;
}

/*
    Output:
        Enter the base and exponent value: 2 3
        The sum of the series is: 15

        Enter the base and exponent value: 3 0
        The sum of the series is: 1
*/