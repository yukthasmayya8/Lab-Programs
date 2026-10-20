/*
    Write a C++ program to find the frequency of presence of an element in an array.
*/

#include <iostream>
using namespace std;

class freq
{
private:
    int i, n, ele, fq, a[100];

public:
    void get();
    void find();
    void put();
};

void freq::get()
{
    cout << "Enter the array size: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the search element: ";
    cin >> ele;
}

void freq::find()
{
    fq = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == ele)
            fq++;
    }
}

void freq::put()
{
    if (fq > 0)
        cout << "The frequency of presence of " << ele << " in an array is " << fq << endl;
    else
        cout << "The element " << ele << " does not exist" << endl;
}

int main()
{
    freq f;
    f.get();
    f.find();
    f.put();
    return 0;
}

/*
    Output:
        Enter the array size: 5
        Enter the array elements: 1 2 3 4 3
        Enter the search element: 3
        The frequency of presence of 3 in an array is 2

        Enter the array size: 5
        Enter the array elements: 1 2 3 4 5
        Enter the search element: 6
        The element 6 does not exist
*/