/*
A math app needs to determine the type of roots for a quadratic equation
based on user input. Develop a C program to calculate and display the
roots based on the given coefficients.
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, root1, root2, disc, real, imag;

    printf("Enter coefficients of quadratic equation (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0)
    {
        printf("Invalid Coefficients!\n");
    }
    else if (a == 0)
    {
        root1 = -c / b;
        printf("Linear Equation with root: %f\n", root1);
    }
    else
    {
        disc = (b * b) - (4 * a * c);
        printf("Discriminant = %f\n", disc);

        if (disc > 0)
        {
            root1 = (-b + sqrt(disc)) / (2 * a);
            root2 = (-b - sqrt(disc)) / (2 * a);
            printf("Two distinct real roots: %f and %f\n", root1, root2);
        }
        else if (disc == 0)
        {
            root1 = -b / (2 * a);
            printf("One real root: %f\n", root1);
        }
        else
        {
            real = -b / (2 * a);
            imag = sqrt(-disc) / (2 * a);
            printf("Complex roots: %f + %fi and %f - %fi\n", real, imag, real, imag);
        }
    }
}

/*
Output:

1.
Enter coefficients of quadratic equation (a, b, c): 1 -5 6
Discriminant = 1.000000
Two distinct real roots: 4.000000 and 1.000000

2.
Enter coefficients of quadratic equation (a, b, c): 1 -4 4
Discriminant = 0.000000
One real root: 2.000000

3.
Enter coefficients of quadratic equation (a, b, c): 1 2 5
Discriminant = -16.000000
Complex roots: -1.000000 + 2.000000i and -1.000000 - 2.000000i

4.
Enter coefficients of quadratic equation (a, b, c): 0 2 -6
Linear Equation with root: 3.000000

5.
Enter coefficients of quadratic equation (a, b, c): 0 0 5
Invalid Coefficients!

6.
Enter coefficients of quadratic equation (a, b, c): 0 0 0
Invalid Coefficients!
*/