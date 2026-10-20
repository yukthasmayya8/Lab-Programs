/*
    Write a C++ program to search for an element in a sorted array using binary search method.
*/

#include <iostream>
using namespace std;

class bs
{
private:
    int i, n, ele, loc, a[100];

public:
    void get();
    void search();
    void put();
};

void bs::get()
{
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the search element: ";
    cin >> ele;
}

void bs::search()
{
    int b, m, e;
    b = 0;
    e = n - 1;
    loc = -1;
    while (b <= e)
    {
        m = (b + e) / 2;
        if (a[m] == ele)
        {
            loc = m;
            break;
        }
        else if (ele < a[m])
            e = m - 1;
        else
            b = m + 1;
    }
}

void bs::put()
{
    if (loc != -1)
        cout << "The element " << ele << " is found in the location " << loc << endl;
    else
        cout << "The search is unsuccessful." << endl;
}

int main()
{
    bs b;
    b.get();
    b.search();
    b.put();
    return 0;
}

/*
    Output:
        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter the search element: 3
        The element 3 is found in the location 2

        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter the search element: 6
        The search is unsuccessful.
*/