# UNEDV21

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Worked example - Print with End Parameter

In this example, we create a folder path by printing each part separately, using the `end` parameter to add a forward slash ("/") instead of moving to a new line.

For instance, you need to print "C:", "Users", "John", and "Documents" on the same line, with each part separated by a forward slash.

When executed, the code will output:

```
C:/Users/John/Documents

```

This demonstrates how to customize the output by using the `end` parameter in the `print()` function. You can experiment by changing the folder names or the separator to see how the output updates!

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T17:05:16.860Z  

```py
# Print the drive letter 'C:' and append a forward slash instead of a newline
print("C:", end="/")

# Append the 'Users' directory to the path, ending with a forward slash
print("Users", end="/")

# Add 'John' as a specific user's directory, continuing with a forward slash
print("John", end="/")

# Complete the directory structure with 'Documents' as the final part of the path
print("Documents")

```

---

[View on CodeChef](https://www.codechef.com/problems/UNEDV21)