/*
    Write a C++ Program to check whether a given string is a palindrome or not.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[100], rev[100];
    int i, len;

    cout << "Enter the string: ";
    cin.getline(s, 100);

    strcpy(rev, s);

    len = strlen(s);
    for (i = 0; i < len / 2; i++)
    {
        char temp = rev[i];
        rev[i] = rev[len - 1 - i];
        rev[len - 1 - i] = temp;
    }

    if (strcmp(s, rev) == 0)
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
