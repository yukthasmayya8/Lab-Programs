/*
    Write a C++ Program to find the sum and average of 'N' numbers using arrays.
*/

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

    sum = 0;
    for (i = 0; i < n; i++)
        sum = sum + a[i];
    avg = (float)sum / n;

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << avg;
    return 0;
}

/*
    Output:
        Enter the number of elements: 5
        Enter the array elements: 10 20 30 40 50
        The sum is: 150
        The average is: 30
*/