#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, i, n;
    cout << "Enter the number: ";
    cin >> n;

    a = 0;
    b = 1;
    cout << "The fibonacci numbers are: " << a << setw(4) << b;
    for (i = 2; i < n; i++)
    {
        c = a + b;
        cout << setw(4) << c;
        a = b;
        b = c;
    }
    return 0;
}
