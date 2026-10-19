#include <iostream>
using namespace std;

int main()
{
    int a[10], i, n, sum;
    float avg;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
        for (j = 0; j < n-1; j++)
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }

    cout << "The elements after sorting: " << setw(4);
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
    return 0;
}
