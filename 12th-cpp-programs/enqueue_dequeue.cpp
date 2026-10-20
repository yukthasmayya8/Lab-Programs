/*
    Write a C++ program to perform enqueue and dequeue operations.
*/

#include <iostream>
#include <iomanip>
#define n 10
using namespace std;

class que
{
private:
    int a[n], f, r, i, ct;

public:
    que();
    void enq(int item);
    void deq();
    void print();
};

que::que()
{
    f = -1;
    r = -1;
    ct = 0;
}

void que::enq(int item)
{
    if (r == n - 1)
    {
        cout << "Queue is full" << endl;
        return;
    }
    else
    {
        if (f == -1)
        {
            f = 0;
            r = 0;
        }
        else
            r = r + 1;
        a[r] = item;
        ct++;
        cout << item << " is inserted successfully." << endl;
    }
}

void que::deq()
{
    if (f == -1)
    {
        cout << "Queue is empty" << endl;
        return;
    }
    int item = a[f];
    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
        f = f + 1;
    ct--;
    cout << item << " is deleted successfully." << endl;
}

void que::print()
{
    if (ct > 0)
    {
        cout << "The queue elements are: ";
        for (i = f; i <= r; i++)
            cout << setw(4) << a[i];
        cout << endl;
    }
    else
        cout << "Queue is empty" << endl;
}

int main()
{
    que q;
    q.print();
    q.enq(10);
    q.print();
    q.enq(20);
    q.print();
    q.enq(30);
    q.print();
    q.deq();
    q.print();
    q.deq();
    q.print();
    q.deq();
    q.print();
    return 0;
}

/*
    Output:
        Queue is empty
        10 is inserted successfully.
        The queue elements are:   10
        20 is inserted successfully.
        The queue elements are:   10   20
        30 is inserted successfully.
        The queue elements are:   10   20   30
        10 is deleted successfully.
        The queue elements are:   20   30
        20 is deleted successfully.
        The queue elements are:   30
        30 is deleted successfully.
        Queue is empty
*/