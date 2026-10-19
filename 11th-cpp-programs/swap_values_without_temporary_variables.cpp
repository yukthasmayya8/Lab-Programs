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
