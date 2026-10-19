#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    char s[100];
    int l, c = 0, v = 0, i;
    cout << "Enter the string: ";
    cin.getline(s, 100);
    l = strlen(s);

    for (i = 0; i < l; i++)
        if (isalpha(s[i]))
            switch (toupper(s[i]))
            {
                case 'A' :
                case 'E' :
                case 'I' :
                case 'O' :
                case 'U' :  v++;
                            break;
                default:    c++;
                            break;
            }
            
    cout << " The  number of vowel in the string is: " << v << endl;
    cout << " The  number of constants in the string is: " << c;
    return 0;
}
