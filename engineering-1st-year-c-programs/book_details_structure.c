/*
A local library needs to store and display details of its books, including title, author, and year of publication. Design a structure that can hold these details and develop a C program to display a list of all books entered.
*/

#include <stdio.h>

#define MAX 100

// Define structure
struct Book
{
    char title[100];
    char author[100];
    int year;
};

int main()
{
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    // Input book details
    for (i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Title: ");
        scanf(" %[^\n]", books[i].title);

        printf("Enter Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Enter Year of Publication: ");
        scanf("%d", &books[i].year);
    }

    // Display book details
    printf("\n--- Library Book List ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook %d Details:\n", i + 1);
        printf("Title  : %s\n", books[i].title);
        printf("Author : %s\n", books[i].author);
        printf("Year   : %d\n", books[i].year);
    }

    return 0;
}

/*
Output:

Enter number of books: 2

Book 1
Enter Title: Wings of Fire
Enter Author: A P J Abdul Kalam
Enter Year of Publication: 1999

Book 2
Enter Title: The Discovery of India
Enter Author: Jawaharlal Nehru
Enter Year of Publication: 1946

--- Library Book List ---

Book 1 Details:
Title  : Wings of Fire
Author : A P J Abdul Kalam
Year   : 1999

Book 2 Details:
Title  : The Discovery of India
Author : Jawaharlal Nehru
Year   : 1946
*/