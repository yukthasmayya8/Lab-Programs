/*
    Write a C++ Program to find the second largest of 'N' numbers using arrays.
*/

#include <iostream>
using namespace std;

int main()
{
    int a[10], i, n, sl, l;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    // Initialize with first two elements
    if (a[0] > a[1])
    {
        l = a[0];
        sl = a[1];
    }
    else
    {
        l = a[1];
        sl = a[0];
    }

    // Process remaining elements
    for (i = 2; i < n; i++)
    {
        if (a[i] > l)
        {
            sl = l;
            l = a[i];
        }
        else if (a[i] > sl && a[i] != l)
        {
            sl = a[i];
        }
    }

    cout << "The largest is: " << l << endl;
    cout << "The second largest is: " << sl;
    return 0;
}
