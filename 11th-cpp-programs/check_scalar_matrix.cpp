#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, n, m, scalar, se;
    float avg;
    cout << "Enter the order of matrix: ";
    cin >> m >> n;
    cout << "Enter the matrix elements: ";
    for (i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];
    
    if (m == n)
    {
        cout << "It is a square and ";
        scalar = 1;
        se = a[0][0];
        for (i = 0; i < m; i++)
            for (j = 0; j <n; j++)
                if (i == j)
                {
                    if (se != a[i][j])
                    {
                        scalar = 0;
                        break;
                    }
                }
                else if (a[i][j] != 0)
                {
                    scalar = 0;
                    break;
                }    

        if(scalar)
            cout << "a scalar matrix" << endl;
        else
            cout << "not a scalar matrix" << endl;
        }
    else
        cout << "It is a rectangular matrix";
    return 0;
}
