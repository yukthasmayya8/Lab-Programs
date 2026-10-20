"""
Read a multi-digit number (as chars) from the console. Develop a program to
print the frequency of each digit with a suitable message.
"""

# Read number as string (so digits can be processed individually)
num_str = input("Enter a multi-digit number: ")

# Dictionary to store frequency
frequency = {}

# Count frequency of each digit
for digit in num_str:
    if digit.isdigit():  # Ensure only digits are counted
        frequency[digit] = frequency.get(digit, 0) + 1

# Display results
print("\n--- Digit Frequency ---")

for digit, count in sorted(frequency.items()):
    print(f"Digit {digit} occurs {count} time(s)")


"""
Output:

1.
Enter a multi-digit number: 11243325534
--- Digit Frequency ---
Digit 1 occurs 2 time(s)
Digit 2 occurs 2 time(s)
Digit 3 occurs 3 time(s)
Digit 4 occurs 2 time(s)
Digit 5 occurs 2 time(s)
"""