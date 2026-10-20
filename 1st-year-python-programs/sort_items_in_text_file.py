"""
Develop a program to sort the contents of a text file and write the
sorted contents into a separate text file.

Hint: Use string methods strip(), len(), list methods sort(), append(),
and file methods open(), readlines(), and write().
"""

# Step 1: Open and read all lines
with open("file1.txt", "r") as infile:
    lines = infile.readlines()

# Step 2: Empty list for all words
words = []

# Step 3: Extract and clean words
for line in lines:
    for word in line.strip().split():
        word = word.strip(".,!?:;")

        if word:
            words.append(word)

# Step 4: Sort all words alphabetically
words.sort()
print(words)

# Step 5: Write sorted words into another file
with open("sorted_output.txt", "w") as outfile:
    for word in words:
        outfile.write(word + "\n")


"""
Output:

1.
['Banana', 'Mango', 'Orange', 'apple', 'cherry', 'good', 'is', 'is', 'is',
'is', 'juicy', 'red', 'sweet', 'tastes', 'yellow']
"""