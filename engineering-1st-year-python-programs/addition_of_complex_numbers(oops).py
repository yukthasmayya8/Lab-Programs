"""
Define a function that takes TWO objects representing complex numbers
and returns a new complex number with the sum of two complex numbers.
Define a suitable class 'Complex' to represent the complex number.

Develop a program to read N (N >= 2) complex numbers and to compute
the addition of N complex numbers.
"""

# Define the Complex class
class Complex:
    def __init__(self, real, img):
        self.real = real
        self.img = img

    # Method to display the complex number nicely
    def __str__(self):
        sign = '+' if self.img >= 0 else '-'
        return f"{self.real} {sign} {abs(self.img)}i"


# Function to add two complex numbers
def addcomplex(c1, c2):
    realpart = c1.real + c2.real
    imgpart = c1.img + c2.img
    return Complex(realpart, imgpart)


# Read number of complex numbers
n = int(input("Enter number of complex numbers (n >= 2): "))

if n < 2:
    print("Error: N must be at least 2.")
else:
    # Read N complex numbers from user
    complexnumbers = []

    for i in range(n):
        print(f"\nComplex number {i + 1}:")
        real = float(input("Enter real part: "))
        img = float(input("Enter imaginary part: "))
        complexnumbers.append(Complex(real, img))

    # Compute the sum of all N complex numbers
    result = complexnumbers[0]

    for i in range(1, n):
        result = addcomplex(result, complexnumbers[i])

    print("\nSum of complex numbers =", result)


"""
Output:

1.
Enter number of complex numbers (n >= 2): 3

Complex number 1:
Enter real part: 1
Enter imaginary part: 2

Complex number 2:
Enter real part: 3
Enter imaginary part: 2

Complex number 3:
Enter real part: 4
Enter imaginary part: -1

Sum of complex numbers = 8.0 + 3.0i
"""