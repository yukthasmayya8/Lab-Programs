#include <iostream>
using namespace std;

int main()
{
    int gcd(int, int);
    int a, b, lcm, g;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    g = gcd(a, b);
    lcm = (a * b) / g;
    cout << "The GCD is: " << g << endl;
    cout << "The LCM is: " << lcm;
    return 0;
}

int gcd(int m, int n)
{
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return (m);
}
