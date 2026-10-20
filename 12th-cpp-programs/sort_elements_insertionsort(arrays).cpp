/*
    Write a C++ program to sort the elements of an array using insertion sort method.
*/

#include <iostream>
#include <iomanip>
using namespace std;

class sorting
{
private:
    int i, n, a[100];

public:
    void get();
    void sort();
    void put();
};

void sorting::get()
{
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
}

void sorting::sort()
{
    int j, t;
    for (i = 1; i < n; i++)
    {
        j = i;
        while (j >= 1)
        {
            if (a[j] < a[j - 1])
            {
                t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
            j--;
        }
    }
}

void sorting::put()
{
    cout << "The array after sorting is: ";
    for (i = 0; i < n; i++)
        cout << setw(4) << a[i];
}

int main()
{
    sorting s;
    s.get();
    s.sort();
    s.put();
    return 0;
}

/*
    Output:
        Enter the array size: 5
        Enter the array elements: 5 2 4 1 3
        The array after sorting is:    1   2   3   4   5
*/
