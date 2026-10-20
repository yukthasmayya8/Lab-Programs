"""
Develop a program to read 6 subject marks from the keyboard for a student.
Generate a report that displays the marks from the highest to the lowest
score attained by the student.

Read the marks into a 1-Dimensional array and sort using the
Bubble Sort technique.
"""

# Step 1: Read marks for 6 subjects from the user
marklist = []

print("Enter marks for 6 subjects:")

for i in range(6):
    mark = float(input(f"Enter mark for subject {i + 1}: "))
    marklist.append(mark)

# Step 2: Bubble Sort
n = len(marklist)

for i in range(n - 1):
    for j in range(n - i - 1):
        if marklist[j] > marklist[j + 1]:
            marklist[j], marklist[j + 1] = marklist[j + 1], marklist[j]

marklist.reverse()
print(marklist)

# Step 3: Display the report
print("\n--- Student Marks Report ---")
print("Marks sorted from highest to lowest:")

for mark in marklist:
    print(mark)


"""
Output:

1.
Enter marks for 6 subjects:
Enter mark for subject 1: 57
Enter mark for subject 2: 33
Enter mark for subject 3: 45
Enter mark for subject 4: 77
Enter mark for subject 5: 23
Enter mark for subject 6: 45
[77.0, 57.0, 45.0, 45.0, 33.0, 23.0]

--- Student Marks Report ---
Marks sorted from highest to lowest:
77.0
57.0
45.0
45.0
33.0
23.0
"""