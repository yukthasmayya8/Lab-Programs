"""
Read N numbers from the console and create a list. Develop a program
to print mean, variance and standard deviation with suitable messages.
"""

import math

# Read N
n = int(input("Enter how many numbers you want: "))

# Read numbers into a list
numbers = []

for i in range(n):
    num = float(input(f"Enter the number {i+1}: "))
    numbers.append(num)

print("Numbers are:", numbers)

# Calculate mean
mean = sum(numbers) / n
print("Mean = ", mean)

# Calculate variance
variance = sum((x - mean) ** 2 for x in numbers) / n
print("Variance = ", variance)

# Calculate standard deviation
std_dev = math.sqrt(variance)
print("Standard Deviation = ", std_dev)


"""
Output:

1.
Enter how many numbers you want: 5
Enter the number 1: 10
Enter the number 2: 20
Enter the number 3: 30
Enter the number 4: 40
Enter the number 5: 50
Numbers are: [10.0, 20.0, 30.0, 40.0, 50.0]
Mean =  30.0
Variance =  200.0
Standard Deviation =  14.142135623730951
"""