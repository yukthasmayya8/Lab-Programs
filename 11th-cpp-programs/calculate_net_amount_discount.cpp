/*
    Write a C++ Program to input the amount of a bill if the amount is greater than 1000, 8% discount is given otherwise no discount is given. Output the net amount and the net discount using simple if statements.
*/

#include <iostream>
using namespace std;

int main()
{
    float amt, disc, net_amt, net_disc;
    cout << "Enter the amount: ";
    cin >> amt;

    disc = 0.00;
    if (amt > 1000)
        disc = 0.08;
    net_disc = amt * disc;
    net_amt = amt - net_disc;

    cout << "Net discount is: " << net_disc << endl;
    cout << "Net amount is: " << net_amt;
    return 0;
}
