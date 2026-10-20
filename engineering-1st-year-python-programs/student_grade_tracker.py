"""
Develop Student Grade Tracker: Accept multiple students' names and
marks. Store them in a list of tuples or dictionaries. Display summary
reports (average, topper, etc.).
"""

print("=== Student Grade Tracker ===")

# Accept multiple students' names and marks
def inputstudentdata():
    slist = []
    n = int(input("Enter number of students: "))

    for i in range(n):
        print(f"\nStudent {i + 1}")
        name = input("Enter name: ")
        marks = float(input("Enter marks (out of 100): "))
        slist.append({'name': name, 'marks': marks})

    print("Student details are:", slist)
    return slist


# Assign letter grade based on marks
def get_grade(marks):
    if marks >= 90:
        return 'A+'
    elif marks >= 80:
        return 'A'
    elif marks >= 70:
        return 'B'
    elif marks >= 60:
        return 'C'
    elif marks >= 50:
        return 'D'
    else:
        return 'F'


# Calculate average, topper, and performance summary
def calculatesummary(students):
    if not students:
        print("No data available.")
        return

    print("\n--- Summary Report ---")

    markslist = [s['marks'] for s in students]

    print("Total Students:", len(students))

    avg = sum(markslist) / len(markslist)
    print("Average Marks:", avg)

    topper = max(students, key=lambda s: s['marks'])
    print("Topper is:", topper['name'], ":", topper['marks'])

    lowest = min(students, key=lambda s: s['marks'])
    print("Lowest Scorer is:", lowest['name'], ":", lowest['marks'])

    print("\nGrade Summary:")
    print("Name-----Marks------Grade")

    for s in students:
        grade = get_grade(s['marks'])
        print(s['name'], "-----", s['marks'], "------", grade)


students = inputstudentdata()
calculatesummary(students)


"""
Output:

1.
=== Student Grade Tracker ===
Enter number of students: 3

Student 1
Enter name: Shrunga
Enter marks (out of 100): 86

Student 2
Enter name: Teddy
Enter marks (out of 100): 98

Student 3
Enter name: Visha
Enter marks (out of 100): 80

Student details are: [{'name': 'Shrunga', 'marks': 86.0}, {'name': 'Teddy', 'marks': 98.0}, {'name': 'Visha', 'marks': 80.0}]

--- Summary Report ---
Total Students: 3
Average Marks: 88.0
Topper is: Teddy : 98.0
Lowest Scorer is: Visha : 80.0

Grade Summary:
Name-----Marks------Grade
Shrunga ----- 86.0 ------ B
Teddy ----- 98.0 ------ A
Visha ----- 80.0 ------ B
"""