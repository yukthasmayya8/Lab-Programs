/*
A basic mobile contact manager stores first and last names separately. For displaying full names in the contact list, you need to join them manually. Additionally, the system must check the length of each full name to ensure it fits the screen. Perform these operations by developing a C program without using built-in string functions.
*/

#include <stdio.h>

#define MAX 100
#define SCREEN_LIMIT 20

int main()
{
    char first[MAX], last[MAX], full[MAX];
    int i = 0, j = 0, length = 0;

    printf("Enter First Name: ");
    scanf("%s", first);

    printf("Enter Last Name: ");
    scanf("%s", last);

    // Copy first name into full name
    while (first[i] != '\0')
    {
        full[i] = first[i];
        i++;
    }

    // Add space between names
    full[i] = ' ';
    i++;

    // Copy last name into full name
    while (last[j] != '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }

    // Add null character
    full[i] = '\0';

    // Calculate length manually
    length = 0;
    while (full[length] != '\0')
    {
        length++;
    }

    printf("\nFull Name: %s\n", full);
    printf("Length of Full Name: %d\n", length);

    if (length <= SCREEN_LIMIT)
        printf("The name fits on the screen.\n");
    else
        printf("The name does NOT fit on the screen.\n");

    return 0;
}

/*
Output:

1.
Enter First Name: Yuktha
Enter Last Name: Mayya

Full Name: Yuktha Mayya
Length of Full Name: 12
The name fits on the screen.

2.
Enter First Name: Lakshminarayana
Enter Last Name: Mayya
Full Name: Lakshminarayana Mayya
Length of Full Name: 22
The name does NOT fit on the screen.
*/