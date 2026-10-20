/*
    Write a C++ program to insert an element at a given position in an array.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

class insertion
{
private:
    int i, n, ele, pos, a[100];

public:
    void get();
    void insert();
    void put();
};

void insertion::get()
{
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter element to be inserted: ";
    cin >> ele;
    cout << "Enter the position: ";
    cin >> pos;
}

void insertion::insert()
{
    if (pos > n)
    {
        cout << pos << " is an invalid position" << endl;
        exit(0);
    }
    for (i = n - 1; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = ele;
    n++;
    cout << ele << " is inserted successfully." << endl;
}

void insertion::put()
{
    cout << "The array after insertion is: ";
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
}

int main()
{
    insertion i;
    i.get();
    i.insert();
    i.put();
    return 0;
}

/*
    Output:
        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter element to be inserted: 10
        Enter the position: 2
        10 is inserted successfully.
        The array after insertion is:    1   2  10   3   4   5

        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter element to be inserted: 10
        Enter the position: 6
        6 is an invalid position
*/