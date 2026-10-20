"""
Develop a program to read the name and year of birth of a person.
Display whether the person is a senior citizen or not.
"""

from datetime import datetime

# Read name and year of birth
name = input("Enter your name: ")
year_of_birth = int(input("Enter your year of birth: "))

# Get current year
current_year = datetime.now().year

# Calculate age
age = current_year - year_of_birth

# Check whether the person is a senior citizen
if age >= 60:
    print(f"{name}, you are {age} years old. You are a senior citizen.")
else:
    print(f"{name}, you are {age} years old. You are not a senior citizen.")


"""
Output:

1.
Enter your name: Ramesh
Enter your year of birth: 2016
Ramesh, you are 9 years old. You are not a senior citizen.

2.
Enter your name: Suresh
Enter your year of birth: 1960
Suresh, you are 65 years old. You are a senior citizen.
"""