/*
    Write a C++ Program to check whether a given string is a palindrome or not.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100], r[100];

    cout << "Enter the string: ";
    cin.getline(s, 100);

    strcpy(r, s);
    strrev(r);

    if (strcmp(s, r) == 0)
        cout << s << " is a palindrome string";
    else
        cout << s << " is not a palindrome string";

    return 0;
}

/*
    Output:
        Enter the string: racecar
        racecar is a palindrome string

        Enter the string: hello
        hello is not a palindrome string
*/