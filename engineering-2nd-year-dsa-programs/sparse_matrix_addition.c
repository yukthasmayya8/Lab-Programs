/*
Develop a C program to:
a. Read two sparse matrices of the same order.
b. Convert both into 3-tuple representation.
c. Perform matrix addition.
d. Display the resultant matrix in both normal matrix form and 3-tuple form.
*/

#include <stdio.h>
#define MAX 20

typedef struct TERM
{
    int row, col, val;
} TERM;

void convert(int a[MAX][MAX], TERM t[], int r, int c)
{
    int i, j, k = 1;

    t[0].row = r;
    t[0].col = c;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                t[k].row = i;
                t[k].col = j;
                t[k].val = a[i][j];
                k++;
            }
        }
    }

    t[0].val = k - 1;
}

void displayTuple(TERM t[])
{
    int i;

    printf("Row\tCol\tVal\n");

    for (i = 0; i <= t[0].val; i++)
    {
        printf("%d\t%d\t%d\n",
               t[i].row, t[i].col, t[i].val);
    }
}

int main()
{
    int a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX];
    int r, c, i, j;

    TERM t1[MAX * MAX], t2[MAX * MAX], ts[MAX * MAX];

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter first matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter second matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    convert(a, t1, r, c);
    convert(b, t2, r, c);

    printf("\nMatrix 1 3-Tuple:\n");
    displayTuple(t1);

    printf("\nMatrix 2 3-Tuple:\n");
    displayTuple(t2);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    convert(sum, ts, r, c);

    printf("\nResultant Matrix:\n");

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", sum[i][j]);
        }

        printf("\n");
    }

    printf("\nResultant 3-Tuple:\n");
    displayTuple(ts);

    return 0;
}

/*
    Output:

    Enter rows and columns: 3 3
    Enter first matrix:
    0 0 1
    0 0 0
    2 3 0
    Enter second matrix:
    1 0 0
    0 0 4
    0 0 0

    Matrix 1 3-Tuple:
    Row     Col     Val
    3       3       3
    0       2       1
    2       0       2
    2       1       3

    Matrix 2 3-Tuple:
    Row     Col     Val
    3       3       2
    0       0       1
    1       2       4

    Resultant Matrix:
    1       0       1
    0       0       4
    2       3       0

    Resultant 3-Tuple:
    Row     Col     Val
    3       3       5
    0       0       1
    0       2       1
    1       2       4
    2       0       2
    2       1       3
*/