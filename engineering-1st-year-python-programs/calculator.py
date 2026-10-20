"""
Develop a Python program to read 2 numbers from the keyboard
and perform the basic arithmetic operations based on the choice.
(1-Add, 2-Subtract, 3-Multiply, 4-Divide).
"""

# Read two numbers from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Show menu
print("\nChoose an operation:")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")

# Read choice
choice = int(input("Enter your choice (1-4): "))

# Perform operation based on choice
if choice == 1:
    result = num1 + num2
    print(f"Result: {num1} + {num2} = {result}")

elif choice == 2:
    result = num1 - num2
    print(f"Result: {num1} - {num2} = {result}")

elif choice == 3:
    result = num1 * num2
    print(f"Result: {num1} * {num2} = {result}")

elif choice == 4:
    if num2 == 0:
        print("Error: Division by zero")
    else:
        result = num1 / num2
        print(f"Result: {num1} / {num2} = {result}")

else:
    print("Invalid choice! Please enter a number between 1 and 4.")


"""
Output:

1.
Enter the first number: 1
Enter the second number: 4

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 1
Result: 1.0 + 4.0 = 5.0

2.
Enter the first number: 3
Enter the second number: 5

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 2
Result: 3.0 - 5.0 = -2.0

3.
Enter the first number: 1
Enter the second number: 8

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 3
Result: 1.0 * 8.0 = 8.0

4.
Enter the first number: 4
Enter the second number: 0

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 4
Error: Division by zero

5.
Enter the first number: 8
Enter the second number: 2

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 4
Result: 8.0 / 2.0 = 4.0

6.
Enter the first number: 4
Enter the second number: 2

Choose an operation:
1. Add
2. Subtract
3. Multiply
4. Divide
Enter your choice (1-4): 5
Invalid choice! Please enter a number between 1 and 4.
"""