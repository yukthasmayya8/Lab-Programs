/*
    Write a C++ Program to input a character and to find out whether it is an upper case or lower case character.
*/

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << ch << " is an upper case character";
    else
        cout << ch << " is a lower case character";
    return 0;
}

/*
    Output:
        Enter a character: A
        A is an upper case character

        Enter a character: a
        a is a lower case character
*/