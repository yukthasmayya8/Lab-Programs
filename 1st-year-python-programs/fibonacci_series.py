"""
Develop a program to generate Fibonacci sequence of length (N).
Read N from the console.
"""

# Read N from user
num = int(input("Enter a number: "))

# First two numbers of Fibonacci sequence
first = 0
second = 1

if num <= 0:
    print("Please enter positive number")

elif num == 1:
    print("Fibonacci Series: ", first)

else:
    print("Fibonacci Series: ", first, second, end=' ')

    for i in range(2, num):
        next = first + second
        first = second
        second = next
        print(next, end=' ')

"""
Output:

1.
Enter a number: 7
Fibonacci Series:  0 1 1 2 3 5 8

2.
Enter a number: 0
Please enter positive number

3.
Enter a number: 1
Fibonacci Series:  0

4.
Enter a number: -1
Please enter positive number
"""