/*
    Write a C++ program to create a class with data members principal, rate, time. Create member functions to accept data values to compute simple interest and to display the result.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class interest
{
private:
    double p, r, t, si;

public:
    void get();
    void find();
    void put();
};

void interest::get()
{
    cout << "Enter the principal amount, time and rate of interest: ";
    cin >> p >> t >> r;
}

void interest::find()
{
    si = (p * t * r) / 100;
}

void interest::put()
{
    cout << "The simple interest is: " << si << endl;
}

int main()
{
    interest i;
    i.get();
    i.find();
    i.put();
    return 0;
}

/*
    Output:
        Enter the principal amount, time and rate of interest: 10000 2 5
        The simple interest is: 1000
*/