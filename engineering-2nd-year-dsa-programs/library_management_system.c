/*
Develop a C program to implement a Library Management System
using structures and dynamic memory allocation.

a) Define a structure Book with the fields Book ID, Title,
   Author, Price and Availability Status.

b) Dynamically allocate memory to store the details of n books,
   where n is entered by the user.

c) Implement the following functions:
   create() - To allocate memory and read book details.
   display() - To display all book records.
   search() - To search for a book using Book ID.
   issueBook() - To issue a book and update its status.
   returnBook() - To return a book and update its status.

d) Provide a menu-driven interface with options to add book
   records, display all records, search for a book, issue a
   book, return a book and exit.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int Book_ID;
    char Title[50];
    char Author[50];
    float Price;
    char Status[15];
};

struct Book *b = NULL;
int n = 0;

/* Add book records */
void create()
{
    int i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid number of books.\n");
        n = 0;
        return;
    }

    b = (struct Book *)malloc(n * sizeof(struct Book));

    if (b == NULL)
    {
        printf("Memory allocation failed.\n");
        n = 0;
        return;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].Book_ID);

        printf("Title: ");
        scanf(" %[^\n]", b[i].Title);

        printf("Author: ");
        scanf(" %[^\n]", b[i].Author);

        printf("Price: ");
        scanf("%f", &b[i].Price);

        strcpy(b[i].Status, "Available");
    }
}

/* Display all books */
void display()
{
    int i;

    if (b == NULL || n == 0)
    {
        printf("No book records available.\n");
        return;
    }

    printf("\n--- Book Details ---\n");

    for (i = 0; i < n; i++)
    {
        printf("\nBook ID : %d", b[i].Book_ID);
        printf("\nTitle   : %s", b[i].Title);
        printf("\nAuthor  : %s", b[i].Author);
        printf("\nPrice   : %.2f", b[i].Price);
        printf("\nStatus  : %s\n", b[i].Status);
    }
}

/* Search book */
void search()
{
    int id, i;

    if (b == NULL || n == 0)
    {
        printf("No book records available.\n");
        return;
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (b[i].Book_ID == id)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", b[i].Book_ID);
            printf("Title   : %s\n", b[i].Title);
            printf("Author  : %s\n", b[i].Author);
            printf("Price   : %.2f\n", b[i].Price);
            printf("Status  : %s\n", b[i].Status);
            return;
        }
    }

    printf("Book not found.\n");
}

/* Issue book */
void issueBook()
{
    int id, i;

    if (b == NULL || n == 0)
    {
        printf("No book records available.\n");
        return;
    }

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (b[i].Book_ID == id)
        {
            if (strcmp(b[i].Status, "Available") == 0)
            {
                strcpy(b[i].Status, "Issued");
                printf("Book issued successfully.\n");
            }
            else
            {
                printf("Book is already issued.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

/* Return book */
void returnBook()
{
    int id, i;

    if (b == NULL || n == 0)
    {
        printf("No book records available.\n");
        return;
    }

    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < n; i++)
    {
        if (b[i].Book_ID == id)
        {
            if (strcmp(b[i].Status, "Issued") == 0)
            {
                strcpy(b[i].Status, "Available");
                printf("Book returned successfully.\n");
            }
            else
            {
                printf("Book is already available.\n");
            }
            return;
        }
    }

    printf("Book not found.\n");
}

/* Main function */
int main()
{
    int choice;

    while (1)
    {
        printf("\n--- LIBRARY MENU ---\n");
        printf("1. Add Book Records\n");
        printf("2. Display All Book Records\n");
        printf("3. Search Book by Book ID\n");
        printf("4. Issue a Book\n");
        printf("5. Return a Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            free(b);
            b = NULL;
            n = 0;
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            search();
            break;

        case 4:
            issueBook();
            break;

        case 5:
            returnBook();
            break;

        case 6:
            free(b);
            printf("Program terminated.\n");
            return 0;

        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

/*
Output:

1.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 1
    Enter number of books: 2

    Enter details of Book 1
    Book ID: 101
    Title: C Programming
    Author: Dennis Ritchie
    Price: 450

    Enter details of Book 2
    Book ID: 102
    Title: Data Structures
    Author: Seymour Lipschutz
    Price: 550

2.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 2

    --- Book Details ---

    Book ID : 101
    Title   : C Programming
    Author  : Dennis Ritchie
    Price   : 450.00
    Status  : Available

    Book ID : 102
    Title   : Data Structures
    Author  : Seymour Lipschutz
    Price   : 550.00
    Status  : Available

3.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 3
    Enter Book ID to search: 101
    Book Found

4.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 3
    Enter Book ID to search: 103
    Book not found.

5.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 4
    Enter Book ID to issue: 101
    Book issued successfully.

6.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 4
    Enter Book ID to issue: 101
    Book is already issued.

7.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 4
    Enter Book ID to issue: 103
    Book not found.

8.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 5
    Enter Book ID to return: 101
    Book returned successfully.

9.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 5
    Enter Book ID to return: 101
    Book is already available.

10.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 5
    Enter Book ID to return: 103
    Book not found.

11.
    --- LIBRARY MENU ---
    1. Add Book Records
    2. Display All Book Records
    3. Search Book by Book ID
    4. Issue a Book
    5. Return a Book
    6. Exit
    Enter your choice: 6
    Program terminated.
*/