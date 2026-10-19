
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a[10][10], b[10][10], i, j, m1, n1, m2, n2, s[10][10];

    cout << "Enter the order of first matrix: ";
    cin >> m1 >> n1;

    cout << "Enter the order of second matrix: ";
    cin >> m2 >> n2;

    if ((m1 == m2) && (n1 == n2))
    {
        cout << "Enter the first matrix elements: ";
        for (i = 0; i < m1; i++)
            for (j = 0; j < n1; j++)
                cin >> a[i][j];

        cout << "Enter the second matrix elements: ";
        for (i = 0; i < m2; i++)
            for (j = 0; j < n2; j++)
                cin >> b[i][j];

        for (i = 0; i < m1; i++)
            for (j = 0; j < n1; j++)
                s[i][j] = a[i][j] + b[i][j];

        cout << "The sum matrix is: " << endl;

        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n1; j++)
                cout << setw(4) << s[i][j];

            cout << endl;
        }
    }
    else
    {
        cout << "Matrices are not compatible";
    }

    return 0;
}
