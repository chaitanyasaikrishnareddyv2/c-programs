# UNEDV38

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Format a Favorite Hobby Introduction

In this task, you are required to create a simple introduction that includes your name, favorite hobby, and the reason you enjoy it—all separated by " | " for clarity. You will practice using f-strings to format your output neatly.

You should format your output as follows:

 **Expected Output** 

```
Name: John | Hobby: Painting | Reason: It allows me to express creativity.

```

Once you have your code ready, run it to see if your output matches the expected format. Then click “Submit” to check your results!

## Solution

**Language:** Python  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T17:09:14.378Z  

```py
# Using an f-string to format and display a hobby introduction
# The f-string allows us to directly insert values inside curly braces {}

name = "John"
hobby = "Painting"
reason = "It allows me to express creativity."

print(f"Name: {name}", f"Hobby: {hobby}", f"Reason: {reason}", sep=" | ")


```

---

[View on CodeChef](https://www.codechef.com/problems/UNEDV38)