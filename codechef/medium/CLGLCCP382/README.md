# CLGLCCP382

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find Characters and Substrings in a String

Write a C program that takes a string as input and checks if both a specific character and a substring are present in the string.

 **Input Format:** 

- A single string (e.g., "hello@world" or "welcome").
- Two inputs to search for: A character to check for (e.g., "h"). A substring to check for (e.g., "world").

 **Note:**  The string should not contain spaces. The program will read the string as a single word.

 **Steps to Complete:** 

- Use strchr() to find the first character and strstr() to find the substring.
- If both characters and substrings are found, print "Both character and substring found!". Otherwise, print "One or both not found!".
- Use the ternary operator to determine the result.
### Sample 1:
Input
Output

```
hello@world
h
world
```

```
Both character and substring found!
```

### Sample 2:
Input
Output

```
hello
h
@
```

```
One or both not found!
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:21:06.066Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Declare a character array to store the input string
    char ch1, ch2[20];  // A character and substring (ch2) to check for

    
    //Your code goes here
    scanf("%s",str);
   ch1 = strchr(str,'h');
    *ch2 = strstr(str,"world");
    if(ch1!=NULL&&ch2!=NULL)
    {
        printf("Both character and substring found!");
    }
    else
    {
        printf("One or both not found!");
    }
     return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP382)