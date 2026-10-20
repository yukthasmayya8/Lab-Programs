/*
Develop a menu-driven program in C for the following
operations on a stack of integers using array implementation
with maximum size.

(i) Push an element onto the stack
(ii) Pop an element from the stack
(iii) Demonstrate overflow and underflow situations
(iv) Display the status of the stack
(v) Exit

Support the program with appropriate functions for each of the above operations.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int top = -1;
int s[MAX];

void push()
{
    int item;

    if (top == MAX - 1)
    {
        printf("\nStack Overflow");
        return;
    }

    printf("\nEnter item to be inserted: ");
    scanf("%d", &item);

    top = top + 1;
    s[top] = item;
}

void pop()
{
    int item;

    if (top == -1)
    {
        printf("\nStack Underflow");
        return;
    }

    item = s[top];
    top = top - 1;

    printf("\nDeleted item is %d", item);
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\nStack is Empty");
        return;
    }

    printf("\nStack elements are:\n");

    for (i = top; i >= 0; i--)
        printf("%d\n", s[i]);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n---Stack Operations---");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("\nExiting program...");
            exit(0);

        default:
            printf("\nInvalid choice");
        }
    }

    return 0;
}

/*
Output:

1.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Enter item to be inserted: 10

2.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Enter item to be inserted: 20

3.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Enter item to be inserted: 30

4.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Enter item to be inserted: 40

5.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Enter item to be inserted: 50

6.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 3

    Stack elements are:
    50
    40
    30
    20
    10

7.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 1

    Stack Overflow

8.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Deleted item is 50

9.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Deleted item is 40

10.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Deleted item is 30

11.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Deleted item is 20

12.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Deleted item is 10

13.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 3

    Stack is Empty

14.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 2

    Stack Underflow

15.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 9

    Invalid choice

16.
    ---Stack Operations---
    1. Push
    2. Pop
    3. Display
    4. Exit
    Enter your choice: 4

    Exiting program...
*/