#include <iostream>
#define pi 3.142
using namespace std;

int main()
{
    int r;
    float a, c;
    cout << "Enter the radius: ";
    cin >> r;

    a = pi * r * r;
    c = 2 * pi * r;

    cout << "The area of circle is: " << a;
    cout << "The circumference of circle is: " << c;
    return 0;
}
