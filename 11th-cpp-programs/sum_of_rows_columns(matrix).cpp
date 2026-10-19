#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, n, m, rs, cs;
    float avg;
    cout << "Enter the order of matrix: ";
    cin >> m >> n;
    cout << "Enter the matrix elements: ";
    for (i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];
    
    for (i = 0; i < m; i++)
    {
        rs = 0;
        for (j = 0; j < n; j++)
            rs = rs + a[i][j];
        cout << "The sum of " << i+1 << "row is: " << rs <<endl;
    }

    for (i = 0; i < m; i++)
    {
        cs = 0;
        for (j = 0; j < n; j++)
            cs = cs + a[j][i];
        cout << "The sum of " << i+1 << "column is: " << cs <<endl;
    }  
    return 0;
}
