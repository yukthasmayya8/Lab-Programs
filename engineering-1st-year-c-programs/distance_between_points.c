/*
A robot needs to find how far it must travel between two points on a 2D plane.
Develop a C program to calculate the straight-line distance between the given coordinates.
*/

#include <stdio.h>
#include <math.h>

void main()
{
    float x1, y1, x2, y2, distance;

    printf("Enter x1 and y1 (coordinates of the first point): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2 (coordinates of the second point): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The straight-line distance between the two points is: %.2f\n", distance);
}

/*
Output:

1.
Enter x1 and y1 (coordinates of the first point): 0 0
Enter x2 and y2 (coordinates of the second point): 3 4
The straight-line distance between the two points is: 5.00

2.
Enter x1 and y1 (coordinates of the first point): 1 2
Enter x2 and y2 (coordinates of the second point): 1 2
The straight-line distance between the two points is: 0.00

3.
Enter x1 and y1 (coordinates of the first point): -2 -3
Enter x2 and y2 (coordinates of the second point): 2 0
The straight-line distance between the two points is: 5.00
*/