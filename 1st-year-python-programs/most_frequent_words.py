"""
Develop a program to print 10 most frequently appearing words in a text file.

Hint: Use a dictionary with distinct words and their frequency of occurrences.
Sort the dictionary in the reverse order of frequency and display the
dictionary slice of the first 10 items.
"""

# Open the file
ifile = open("\fruit.txt")

# Dictionary to store words and their frequencies
dwords = {}

for line in ifile:
    words = line.split()  # Converting into a list

    for w in words:  # Converting into a dictionary
        dwords[w] = dwords.get(w, 0) + 1

# Create a list of (frequency, word) tuples
listwords = []

for key, val in dwords.items():
    listwords.append((val, key))

# Sort in reverse order of frequency
listwords.sort(reverse=True)

# Display the first 10 items
print("First 10 items of sorted dictionary are:")
print(listwords[0:10])

# Close the file
ifile.close()


"""
Output:

1.
First 10 items of sorted dictionary are:
[(13, 'apple'), (10, 'banana'), (9, 'orange'), (8, 'mango'), (4, 'grapes'), (3, 'Apple'), (2, 'pineapple'), (2, 'Banana'), (1, 'kiwi'), (1, 'Papaya')]
"""