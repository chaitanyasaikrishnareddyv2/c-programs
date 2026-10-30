# CLGLCCP396

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Case Conversion for User Input

Write a program that takes a string from the user, converts it to uppercase and lowercase, and prints both versions.

 **Input Format:** 

A string entered by the user.

 **Note:** 

The input may contain spaces. Use `fgets()` to ensure the entire line is read properly.

 **Steps to Complete:** 

- Use a while loop to ensure that the user provides a non-empty string.
- Convert the string to uppercase using toupper().
- Convert the string to lowercase using tolower().
- Print both the uppercase and lowercase strings.
### Sample 1:
Input
Output

```
Programming in C
```

```
Uppercase string: PROGRAMMING IN C
Lowercase string: programming in c
```

### Sample 2:
Input
Output

```
Valid String

```

```
Uppercase string: VALID STRING
Lowercase string: valid string
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:17:50.058Z  

```c_cpp
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[100];
    
    // Your code goes here
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(i<strlen(str))
    {
        str[i] = toupper(str[i]);
        i++;
    }
    printf("Uppercase string: %s\n",str);
    i=0;
    while(i<strlen(str))
    {
        str[i] = tolower(str[i]);
        i++;
    }
    printf("Lowercase string: %s",str);
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP396)