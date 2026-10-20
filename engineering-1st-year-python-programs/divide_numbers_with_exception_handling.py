"""
Write a function named DivExp which takes TWO parameters a, b and
returns a value c (c = a / b). Write suitable assertion for a > 0
in function DivExp and raise an exception for when b = 0.

Develop a suitable program which reads two values from the console
and calls a function DivExp.
"""

def DivExp(a, b):
    assert a > 0, "AssertionError: 'a' must be greater than 0"

    if b == 0:
        raise ZeroDivisionError(
            "ZeroDivisionError: Division by zero is not allowed."
        )

    c = a / b
    return c


try:
    a = float(input("Enter value for a: "))
    b = float(input("Enter value for b: "))
    print("Result =", DivExp(a, b))

except AssertionError as x:
    print(x)

except ZeroDivisionError as x:
    print(x)


"""
Output:

1.
Enter value for a: 3
Enter value for b: 5
Result = 0.6

2.
Enter value for a: 4
Enter value for b: 5
Result = 0.8

3.
Enter value for a: -1
Enter value for b: 5
AssertionError: 'a' must be greater than 0

4.
Enter value for a: 4
Enter value for b: 0
ZeroDivisionError: Division by zero is not allowed.
"""