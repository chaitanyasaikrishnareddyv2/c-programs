# CLGLCCP378

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Finding Two Characters in a String

Write a C program that takes a string as input and checks if both the characters `@` and `#` are present in the string.
If both characters are found, print `"Both characters found!"`. Otherwise, print `"One or both characters not found!"`. Use the ternary operator to determine the result.

 **Input:** 
A single string, e.g., `"hello@world"` or `"welcome"`.

### Sample 1:
Input
Output

```
hello@world
```

```
One or both characters not found!

```

### Sample 2:
Input
Output

```
@#world

```

```
Both characters found!

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:59:47.487Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Declare a character array to store the input string

    //Your code goes here
fgets(str,sizeof(str),stdin);
char *result1 = strchr(str,'@');
char *result2 = strchr(str,'#');
if(result1!=NULL&&result2!=NULL)
{
    printf("Both characters found!");
}
else
{
    printf("One or both characters not found!");
}
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP378)