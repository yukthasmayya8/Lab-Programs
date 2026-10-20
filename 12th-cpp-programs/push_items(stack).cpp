/*
    Write a C++ program to push items into a stack.
*/

#include <iostream>
#include <iomanip>
#include <cctype>
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
        else
        {
            top++;
            a[top] = item;
            cout << item << " is pushed." << endl;
        }
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
    char choice;
    int item;
    s.print();
    cout << "Do you want to push an item (y/n): ";
    cin >> choice;

    while (toupper(choice) == 'Y')
    {
        cout << "Enter an item: ";
        cin >> item;
        s.push(item);
        s.print();
        cout << "Do you want to push an item (y/n): ";
        cin >> choice;
    }
    return 0;
}

/*
    Output:
        The stack elements are: Stack is empty
        Do you want to push an item (y/n): y
        Enter an item: 10
        10 is pushed.
        The stack elements are:   10
        Do you want to push an item (y/n): y
        Enter an item: 20
        20 is pushed.
        The stack elements are:   20   10
        Do you want to push an item (y/n): n
*/