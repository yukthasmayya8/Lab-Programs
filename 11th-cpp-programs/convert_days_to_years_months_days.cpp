#include <iostream>
using namespace std;

int main()
{
    int td, y, m, d;
    cout << "Enter the number of days: ";
    cin >> td;

    y = td / 365;
    td = td % 365;
    m = td / 30;
    d = td % 30; 
    
    cout << "The number of years is: " << y << endl;
    cout << "The number of months is: " << m << endl;
    cout << "The number of days is: "<< d;
    return 0;
}
