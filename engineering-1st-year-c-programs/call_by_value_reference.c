/*
A currency exchange booth allows users to convert between two currencies. Before confirming the exchange, the system simulates a swap of the values to preview the result without actually changing the original data. In other cases, it updates the actual values. Develop a C program that implements both behaviours using Call by Value and Call by Reference.
*/

#include <stdio.h>

// Call by Value (Preview Swap)
void previewSwap(float a, float b)
{
    float temp;

    temp = a;
    a = b;
    b = temp;

    printf("\n[Preview Mode - Call by Value]\n");
    printf("Currency 1 = %.2f\n", a);
    printf("Currency 2 = %.2f\n", b);
}

// Call by Reference (Actual Swap)
void actualSwap(float *a, float *b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;

    printf("\n[Updated Mode - Call by Reference]\n");
    printf("Currency 1 = %.2f\n", *a);
    printf("Currency 2 = %.2f\n", *b);
}

int main()
{
    float currency1, currency2;

    printf("Enter amount in Currency 1: ");
    scanf("%f", &currency1);

    printf("Enter amount in Currency 2: ");
    scanf("%f", &currency2);

    printf("\nOriginal Values:\n");
    printf("Currency 1 = %.2f\n", currency1);
    printf("Currency 2 = %.2f\n", currency2);

    // Preview (no actual change)
    previewSwap(currency1, currency2);

    printf("\nAfter Preview (Original Values Remain Same):\n");
    printf("Currency 1 = %.2f\n", currency1);
    printf("Currency 2 = %.2f\n", currency2);

    // Actual update
    actualSwap(&currency1, &currency2);

    printf("\nAfter Actual Swap (Values Updated):\n");
    printf("Currency 1 = %.2f\n", currency1);
    printf("Currency 2 = %.2f\n", currency2);

    return 0;
}

/*
Output:

Enter amount in Currency 1: 100
Enter amount in Currency 2: 250

Original Values:
Currency 1 = 100.00
Currency 2 = 250.00

[Preview Mode - Call by Value]
Currency 1 = 250.00
Currency 2 = 100.00

After Preview (Original Values Remain Same):
Currency 1 = 100.00
Currency 2 = 250.00

[Updated Mode - Call by Reference]
Currency 1 = 250.00
Currency 2 = 100.00

After Actual Swap (Values Updated):
Currency 1 = 250.00
Currency 2 = 100.00
*/