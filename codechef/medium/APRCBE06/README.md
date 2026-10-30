# APRCBE06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Full Name Generator and Comparator

You're building a simple user profile system. Each user has a first name and a last name. Your task is to:

- Combine the first name and last name into a full name (with a single space between them).
- Find: The length of the full name. The first and last characters of the full name.
- Compare the full name with an existing user's full name (predefined) to check which comes first alphabetically.

 **Input Format** 

- This program takes no input.

 **Output Format** 

- Print the following: Your full name and its length First and last character of your full name Result of alphabetical comparison (1 if your name comes first, else 0)

 **Sample Output** 

```
Final constructed name: <value>
Length of the name: <value>
First character: <value>
Last character: <value>
Is the new name alphabetically first?: <value> (1=true, 0=false)

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:30:09.570Z  

```c_cpp
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char firstName[] = "Ada";
    char lastName[] = " Lovelace";
    char fullName[50] = "";
    char existingUser[] = "Charles Babbage";

    // Step 1: Construct the full name using the given name parts.
strcpy(fullName,firstName);
strcat(fullName,lastName);



    // Step 2: Find length of full name.

    int nameLength = strlen(fullName);

    // Step 3: Access the first and last characters of `fullName` by index.
    char firstChar = fullName[0];
    char lastChar = lastName[8];

    // Step 4: Compare the constructed name with the existing user's name.
    int comparisonResult = (fullName[0]<existingUser[0])?1:0;


    printf("Final constructed name: %s\n", fullName);
    printf("Length of the name: %d\n", nameLength);
    printf("First character: %c\n", firstChar);
    printf("Last character: %c\n", lastChar);
    printf("Is the new name alphabetically first?: %d (1=true, 0=false)\n", comparisonResult);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/APRCBE06)