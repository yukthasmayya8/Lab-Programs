/*
Develop a C program that takes a student's marks as input and displays their
grade based on the following criteria:
90 and above: Grade A
75 to 89: Grade B
60 to 74: Grade C
50 to 59: Grade D
Below 50: Grade F
Choose a suitable control structure to implement this logic efficiently.
*/

#include <stdio.h>

void main()
{
    int marks;

    printf("Enter the student's marks (0 to 100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks! Please enter a value between 0 and 100.\n");
    else if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 50)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
}

/*
Output:

1.
Enter the student's marks (0 to 100): 95
Grade: A

2.
Enter the student's marks (0 to 100): 80
Grade: B

3.
Enter the student's marks (0 to 100): 65
Grade: C

4.
Enter the student's marks (0 to 100): 55
Grade: D

5.
Enter the student's marks (0 to 100): 35
Grade: F

6.
Enter the student's marks (0 to 100): 105
Invalid marks! Please enter a value between 0 and 100.

7.
Enter the student's marks (0 to 100): -5
Invalid marks! Please enter a value between 0 and 100.
*/