/*
    Write a C++ program to pop elements from a stack.
*/

#include <iostream>
#include <iomanip>
#define n 10
using namespace std;

class stack
{
private:
    int a[n], top;

public:
    stack()
    {
        top = -1;
    }

    void push(int item)
    {
        if (top == n - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }

        top++;
        a[top] = item;
        cout << item << " is pushed." << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int item = a[top];
        top--;
        cout << item << " is popped." << endl;
    }
    void print();
};

void stack::print()
{
    if (top != -1)
    {
        cout << "The stack elements are: ";
        for (int i = top; i >= 0; i--)
            cout << setw(4) << a[i];
        cout << endl;
    }
    else
        cout << "Stack is empty" << endl;
}

int main()
{
    stack s;
    s.print();
    s.push(10);
    s.print();
    s.push(20);
    s.print();
    s.push(30);
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    return 0;
}

/*
    Output:
        Stack is empty
        10 is pushed.
        The stack elements are:   10
        20 is pushed.
        The stack elements are:   20   10
        30 is pushed.
        The stack elements are:   30   20   10
        30 is popped.
        The stack elements are:   20   10
        20 is popped.
        The stack elements are:   10
        10 is popped.
        Stack is empty
*/