"""
Text Analysis Tool: Build a tool that analyses a paragraph:
frequency of each word, longest word, number of sentences, etc.
"""

import string

# Preprocess text
def textanalysis(paragraph):
    translator = str.maketrans("", "", string.punctuation)

    # Remove punctuation and make everything lowercase
    cleanedtext = paragraph.translate(translator).lower()

    # Split into words
    words = cleanedtext.split()
    print("List of words are:", words)

    # Word Frequency
    freq = {}

    for w in words:
        freq[w] = freq.get(w, 0) + 1

    # Longest Word
    longestword = max(words, key=len) if words else None

    # Number of Sentences
    sentences = 0

    for ch in paragraph:
        if ch in ".?!":
            sentences += 1

    # Display the Report
    print("\n--- TEXT ANALYSIS REPORT ---")
    print("Total Words :", len(words))
    print("Unique Words :", len(freq))
    print("Number of Sentences:", sentences)
    print("Longest Word :", longestword)

    print("\nWord Frequencies:")

    for word, count in freq.items():
        print(word, ":", count)


# Main Program
paragraph = input("Enter a paragraph for analysis:\n")
textanalysis(paragraph)


"""
Output:

1.
Enter a paragraph for analysis:
Python is fun! Python is powerful. Python is easy to learn, and fun to use.

List of words are: ['python', 'is', 'fun', 'python', 'is', 'powerful', 'python', 'is', 'easy', 'to', 'learn', 'and', 'fun', 'to', 'use']

--- TEXT ANALYSIS REPORT ---
Total Words : 15
Unique Words : 9
Number of Sentences: 3
Longest Word : powerful

Word Frequencies:
python : 3
is : 3
fun : 2
powerful : 1
easy : 1
to : 2
learn : 1
and : 1
use : 1
"""