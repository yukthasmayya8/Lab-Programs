/*
A college library has a digital bookshelf system where each book is assigned a unique Book ID. The bookshelf is organized in ascending order of Book IDs. Develop a C program to quickly find whether a book with a specific Book ID is available in the shelf (Binary Search).
*/

#include <stdio.h>

int main()
{
    int n, i, key;
    int low, high, mid;
    int found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    int bookID[n];

    printf("Enter Book IDs in ascending order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &bookID[i]);

    printf("Enter Book ID to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (bookID[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < bookID[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (found)
        printf("Book ID %d is available in the shelf.\n", key);
    else
        printf("Book ID %d is NOT available in the shelf.\n", key);

    return 0;
}

/*
Output:

1.
Enter number of books: 5
Enter Book IDs in ascending order:
101 105 110 115 120
Enter Book ID to search: 110
Book ID 110 is available in the shelf.

2.
Enter number of books: 5
Enter Book IDs in ascending order:
101 105 110 115 120
Enter Book ID to search: 108
Book ID 108 is NOT available in the shelf.
*/