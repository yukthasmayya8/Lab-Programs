/*
    Write a C++ Program to arrange a list of numbers in ascending order using arrays.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[10], i, n, j, t;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
        for (j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }

    cout << "The elements after sorting: " << setw(4);
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
    return 0;
}

/*
        Output:
            Enter the number of elements: 5
            Enter the array elements: 5 4 3 2 1
            The elements after sorting:    1    2    3    4    5
*/
