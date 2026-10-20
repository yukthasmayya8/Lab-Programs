/*
Develop a C program that takes marks for three subjects as input.
Use a function to check if the student has passed (minimum 40 marks
in each subject). Display the average and whether the student passed
or failed.
*/

#include <stdio.h>

// Function to check pass condition
int checkPass(int m1, int m2, int m3)
{
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1; // Passed
    else
        return 0; // Failed
}

void main()
{
    int m1, m2, m3;
    float average;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    average = (m1 + m2 + m3) / 3.0;

    printf("Average Marks = %.2f\n", average);

    if (checkPass(m1, m2, m3))
        printf("Result: Passed\n");
    else
        printf("Result: Failed\n");
}

/*
Output:

Enter marks of three subjects: 75 80 65
Average Marks = 73.33
Result: Passed

Enter marks of three subjects: 80 35 70
Average Marks = 61.67
Result: Failed
*/