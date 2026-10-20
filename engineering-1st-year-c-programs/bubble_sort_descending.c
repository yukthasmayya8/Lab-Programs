/*
A sports teacher has recorded the scores of students in a 100-meter race. To prepare the result sheet, the teacher wants the scores arranged in descending order (from highest to lowest). Develop a C program to sort the scores.
*/

#include <stdio.h>

int main()
{
    int n, i, j, temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int scores[n];

    printf("Enter the scores:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &scores[i]);

    // Bubble Sort (Descending Order)
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (scores[j] < scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("\nScores in Descending Order:\n");
    for (i = 0; i < n; i++)
        printf("%d ", scores[i]);

    printf("\n");

    return 0;
}

/*
Output:

Enter number of students: 5
Enter the scores:
45 78 62 91 55

Scores in Descending Order:
91 78 62 55 45
*/