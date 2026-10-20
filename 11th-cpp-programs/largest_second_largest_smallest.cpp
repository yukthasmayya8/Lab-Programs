/*
    Write a C++ Program to find the largest, second largest and smallest of three numbers using simple if statements.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, l, sl, s;
    cout << "Enter three values: ";
    cin >> a >> b >> c;

    l = a;
    s = a;
    if (b > l)
        l = b;
    if (c > l)
        l = c;
    if (b < s)
        s = b;
    if (c < s)
        s = c;
    sl = (a + b + c) - (s + l);

    cout << "The largest is: " << l << endl;
    cout << "The second largest is: " << sl << endl;
    cout << "The smallest is: " << s;
    return 0;
}

/*
    Output:
        Enter three values: 10 20 30
        The largest is: 30
        The second largest is: 20
        The smallest is: 10
*/