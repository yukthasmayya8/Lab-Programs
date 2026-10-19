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
    if (b > s)
        s = b;
    if (c > s)
        s = c;
    sl = (a + b + c) - (s + l);

    cout << "The largest is: " << l << endl;
    cout << "The second largest is: " << sl << endl;
    cout << "The smallest is: "<< s;
    return 0;
}
