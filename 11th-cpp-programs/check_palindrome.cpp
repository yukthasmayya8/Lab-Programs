#include <iostream>
#include <string>
using namespace std;

int main()
{
    char s[100], rev[100];
    cout << "Enter the string: ";
    cin.getline(s,100);

    strcpy(rev ,s);
    strrev(r);
    
    if (strcmpi(s, r) == 0)
        cout << s << " is a palindrome string";
    else:
        cout << s << " is not a palindrome string";
    return 0;
}
