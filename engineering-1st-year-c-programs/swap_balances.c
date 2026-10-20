/*
In an ATM system, two account balances need to be swapped temporarily
for validation. Develop a C program that accepts two balances and uses a
function with pointers to swap them. Display the balances before and after
swapping.
*/

#include <stdio.h>

// Function to swap two balances using pointers
void swap(float *a, float *b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    float balance1, balance2;

    printf("Enter first account balance: ");
    scanf("%f", &balance1);

    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    printf("\nBefore Swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);

    // Passing addresses
    swap(&balance1, &balance2);

    printf("\nAfter Swapping:\n");
    printf("Balance 1 = %.2f\n", balance1);
    printf("Balance 2 = %.2f\n", balance2);
}

/*
Output:

Enter first account balance: 2500.50
Enter second account balance: 5000.75

Before Swapping:
Balance 1 = 2500.50
Balance 2 = 5000.75

After Swapping:
Balance 1 = 5000.75
Balance 2 = 2500.50
*/