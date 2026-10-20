"""
Write a python program to create a list and perform the following operations:
• Inserting an element
• Removing an element
• Appending an element
• Displaying the length of the list
• Popping an element
• Clearing the list
"""

oplist = []

while True:
    print("\n--- List Operations Menu ---")
    print("1. Insert an element at a position")
    print("2. Remove an element")
    print("3. Append an element")
    print("4. Display length of the list")
    print("5. Pop an element")
    print("6. Clear the list")
    print("7. Display the list")
    print("8. Exit")

    choice = int(input("Enter your choice (1-8): "))

    if choice == 1:
        element = input("Enter the element to insert: ")
        pos = int(input("Enter the position (index): "))
        oplist.insert(pos, element)
        print("Updated List:", oplist)

    elif choice == 2:
        element = input("Enter the element to remove: ")
        if element in oplist:
            oplist.remove(element)
            print("Updated List:", oplist)
        else:
            print("Element not found in list.")

    elif choice == 3:
        element = input("Enter the element to append: ")
        oplist.append(element)
        print("Updated List:", oplist)

    elif choice == 4:
        print("Length of the list:", len(oplist))

    elif choice == 5:
        if oplist:
            popped = oplist.pop()
            print(f"Popped element: {popped}")
            print("Updated List:", oplist)
        else:
            print("List is empty. Nothing to pop.")

    elif choice == 6:
        oplist.clear()
        print("List cleared. Current List:", oplist)

    elif choice == 7:
        if oplist:
            print("Current List:", oplist)
        else:
            print("List is empty")

    elif choice == 8:
        print("Exiting program. Goodbye!")
        break

    else:
        print("Invalid choice! Please enter a number between 1 and 8.")


"""
Output:

1.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 1
Enter the element to insert: 11
Enter the position (index): 0
Updated List: ['11']

2.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 1
Enter the element to insert: 22
Enter the position (index): 1
Updated List: ['11', '22']

3.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 1
Enter the element to insert: 33
Enter the position (index): 2
Updated List: ['11', '22', '33']

4.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 1
Enter the element to insert: 0
Enter the position (index): 0
Updated List: ['0', '11', '22', '33']

5.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 2
Enter the element to remove: 0
Updated List: ['11', '22', '33']

6.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 4
Length of the list: 3

7.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 5
Popped element: 33
Updated List: ['11', '22']

8.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 7
Current List: ['11', '22']

9.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 3
Enter the element to append: 44
Updated List: ['11', '22', '44']

10.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 6
List cleared. Current List: []

11.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 7
List is empty

12.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 1
Enter the element to insert: 10
Enter the position (index): 0
Updated List: ['10']

13.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 7
Current List: ['10']

14.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 9
Invalid choice! Please enter a number between 1 and 8.

15.
--- List Operations Menu ---
1. Insert an element at a position
2. Remove an element
3. Append an element
4. Display length of the list
5. Pop an element
6. Clear the list
7. Display the list
8. Exit
Enter your choice (1-8): 
Exiting program. Goodbye!
"""