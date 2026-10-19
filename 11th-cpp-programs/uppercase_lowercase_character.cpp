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
