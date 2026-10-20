/*
    Write a C++ program to delete an element from a given position in an array.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class deletion
{
private:
    int i, n, ele, pos, a[100];

public:
    void get();
    void remove();
    void put();
};

void deletion::get()
{
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the position: ";
    cin >> pos;
}

void deletion::remove()
{
    if (pos > n - 1)
    {
        cout << pos << " is an invalid position" << endl;
        exit(0);
    }
    ele = a[pos];
    for (i = pos; i < n; i++)
        a[i] = a[i + 1];
    n = n - 1;
    cout << ele << " is deleted successfully." << endl;
}

void deletion::put()
{
    cout << "The array after deletion is: ";
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
}

int main()
{
    deletion d;
    d.get();
    d.remove();
    d.put();
    return 0;
}

/*
    Output:
        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter the position: 2
        3 is deleted successfully.
        The array after deletion is:    1   2   4   5

        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter the position: 5
        5 is an invalid position
*/