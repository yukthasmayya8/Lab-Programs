#include <iostream>
using namespace std;

int main()
{
    int a, b, t;
    cout << "Enter two values: ";
    cin >> a >> b;

    t = a;
    a = b;
    b = t;

    cout << "Values after interchanging: a = " << a << " and b = " << b;

    return 0;
}
