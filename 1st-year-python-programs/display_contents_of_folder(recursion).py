"""
Develop a program to display contents of a folder recursively (Directory)
having sub-folders and files (name and type).
"""

import os

def displaycontents(path, indent=0):
    if not os.path.exists(path):
        print("Invalid path!")
        return

    items = os.listdir(path)

    for item in items:
        fullpath = os.path.join(path, item)

        if os.path.isdir(fullpath):
            print(" " * indent + f"[DIR] {item}")
            displaycontents(fullpath, indent + 4)
        else:
            filetype = os.path.splitext(item)[1][1:] or "No Extension"
            print(" " * indent + f"[FILE] {item} (Type: {filetype})")


folderpath = input("Enter folder path: ")
displaycontents(folderpath)


"""
Output:

1.
Enter folder path: C:\testfolder
[DIR] Documents
    [FILE] notes.txt (Type: txt)
    [FILE] report.pdf (Type: pdf)
[DIR] Images
    [FILE] photo.jpg (Type: jpg)
    [FILE] logo.png (Type: png)
[FILE] program.py (Type: py)
[FILE] README (Type: No Extension)

2.
Enter folder path: C:\testfolder\users
Invalid path!
"""