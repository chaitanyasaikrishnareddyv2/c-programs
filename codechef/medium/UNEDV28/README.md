# UNEDV28

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Formatting Text with Single Quotes and Backslashes

In this task, you are required to write a Python program that displays a message containing both double quotes and single quotes, using escape characters and a custom separator.

You should reproduce the following output exactly:

```
The programmer exclaimed - "It's amazing how Python handles special characters!"

```

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T17:07:32.982Z  

```py
# Print the first part of the message: "The programmer exclaimed"
# This is the speaker's part of the message, which is plain text
print(
    "The programmer exclaimed",  
    
    # Print the second part of the message: "It's amazing how Python handles special characters!"
    # Use escape characters to include double quotes (\") and single quote (\') in the string
    "\"It\'s amazing how Python handles special characters!\"",
    
    # Use the sep parameter to add a custom separator (a hyphen and a space: " - ") 
    # between the speaker and the quote
    sep=" - "
)



```

---

[View on CodeChef](https://www.codechef.com/problems/UNEDV28)