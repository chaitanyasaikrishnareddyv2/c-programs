# CLGLCCP389

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Copying a Portion of a String

Write a C program that takes a string as input and copies the first `n` characters (where `n` is provided by the user) of the string to a new string.

 **Input Format:** 

- A single string (e.g., "hello@world" or "welcome") — this string should not contain spaces.
- An integer n to specify the number of characters to copy from the input string.

 **Steps to Complete:** 

- Use strlen() to determine the length of the input string.
- Use strncpy() to copy the first n characters from the input string to the destination string.
- Ensure that the copied string is null-terminated properly.
- If n is greater than the string length, only copy the available characters and ensure the destination is null-terminated.
### Sample 1:
Input
Output

```
hello@world
5
```

```
Copied portion: hello
```

### Sample 2:
Input
Output

```
programming
20
```

```
Copied portion: programming
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T16:57:59.962Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize the source string
    char source[100];
    
    // Declare a destination string with enough space
    char destination[100];
    int n;
    //Your code goes here
    scanf("%s",source);
    scanf("%d",&n);
    strncpy(destination,source,n);
    destination[n] = '\0';
    //Ensure that the copied string is null-terminated properly.
   
    printf("Copied portion: %s\n", destination);
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP389)