/*
    Write a C++ Program to find the position of a given number in an array.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[10], i, n, p, ele;
    float avg;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the search elements: ";
    cin >> ele;

    p = -1;
    for (i = 0; i < n; i++)
        if (ele == a[i])
        {
            p = i;
            break;
        }

    if (p >= 0)
        cout << ele << " is present in the position " << p;
    else
        cout << ele << " does not exist";
    return 0;
}

/*
    Output:
        Enter the number of elements: 5
        Enter the array elements: 10 20 30 40 50
        Enter the search elements: 30
        30 is present in the position 2

        Enter the number of elements: 5
        Enter the array elements: 10 20 30 40 50
        Enter the search elements: 60
        60 does not exist
*/