/*
A sensor in a robotic arm needs to calculate the angle of rotation in real-time,
but the hardware doesn't support built-in trigonometric functions. Develop a C
program to approximate the value of sin(x) using a series expansion method for
improved performance.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

void main()
{
    double sum, term, x, nume;
    int i, deg;
    long fact;

    printf("Enter angle in degrees: ");
    scanf("%d", &deg);

    x = (deg * PI) / 180.0; // Convert to radians

    sum = x;
    nume = x;
    fact = 1;
    i = 2;

    do
    {
        fact = fact * i * (i + 1);
        nume = -nume * x * x;
        term = nume / fact;
        sum += term;
        i += 2;

    } while (fabs(term) >= 0.0001);

    printf("Approximated sin(%d) = %.6lf\n", deg, sum);
}

/*
Output:

Enter angle in degrees: 30
Approximated sin(30) = 0.500000

Enter angle in degrees: 90
Approximated sin(90) = 1.000000

Enter angle in degrees: 180
Approximated sin(180) = 0.000000

Enter angle in degrees: 0
Approximated sin(0) = 0.000000
*/