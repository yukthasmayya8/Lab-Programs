/*
Develop a C program that accepts a course description string and a keyword
from the user. Search whether the keyword exists within the course description
using appropriate string functions. If found, display:
"Keyword '<keyword>' found in the course description."
Otherwise, display:
"Keyword '<keyword>' not found in the course description."
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

void main()
{
    char description[MAX];
    char keyword[100];
    int len;

    printf("Enter the course description:\n");
    scanf("%[^\n]", description);

    len = strlen(description);

    printf("Enter the keyword to search: ");
    scanf("%s", keyword);

    if (strstr(description, keyword))
        printf("Keyword '%s' found in the course description.\n", keyword);
    else
        printf("Keyword '%s' not found in the course description.\n", keyword);
}

/*
Output:

Enter the course description:
Computer Science includes Data Structures and Algorithms
Enter the keyword to search: Algorithms
Keyword 'Algorithms' found in the course description.

Enter the course description:
Computer Science includes Data Structures and Algorithms
Enter the keyword to search: Networking
Keyword 'Networking' not found in the course description.
*/