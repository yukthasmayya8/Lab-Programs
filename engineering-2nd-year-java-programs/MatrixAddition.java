/*
Develop a Java program to add TWO matrices of suitable order N.
The value of N should be read from command line arguments.
*/

import java.util.Scanner;

public class MatrixAddition
{
    public static void main(String[] args)
    {
        if (args.length != 1)
        {
            System.out.println("Usage: java MatrixAddition <N>");
            return;
        }

        int n = Integer.parseInt(args[0]);

        int[][] MatrixA = new int[n][n];
        int[][] MatrixB = new int[n][n];
        int[][] ResultMatrix = new int[n][n];

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter elements of first matrix (" + n + "x" + n + "):");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                MatrixA[i][j] = sc.nextInt();

        System.out.println("Enter elements of second matrix (" + n + "x" + n + "):");
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                MatrixB[i][j] = sc.nextInt();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                ResultMatrix[i][j] = MatrixA[i][j] + MatrixB[i][j];

        System.out.println("Sum of the two matrices:");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                System.out.print(ResultMatrix[i][j] + "\t");

            System.out.println();
        }

        sc.close();
    }
}

/*
Output:

1.
    java MatrixAddition 2 5
    Usage: java MatrixAddition <N>

2.
    java MatrixAddition 
    Usage: java MatrixAddition <N>

3.
    java MatrixAddition 2

    Enter elements of first matrix (2x2):
    1 2
    3 4

    Enter elements of second matrix (2x2):
    5 6
    7 8

    Sum of the two matrices:
    6       8
    10      12
*/