# CLGLCCP374

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Displaying a welcome message

Write a C program that takes a student ID as input and extracts the first two characters as the department code.
If the extracted code is `"CS"`, print `"Computer Science Student"`. Otherwise, print `"Other Department"`.

 **Input:** 
A single string (student ID), e.g., `CS2025` or `EE1042`

### Sample 1:
Input
Output

```
CS2025
```

```
Computer Science Student
```

### Sample 2:
Input
Output

```
EE1023

```

```
Other Department
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:44:26.818Z  

```c_cpp
#include <stdio.h>
#include<string.h>

int main() {
    char id[20];     // To store the full student ID entered by the user
    char dept[3]; 
    // To store the extracted 2-character department code
    
    // Your code goes here
    scanf("%s",id);
    for(int i = 0;i<2;i++)
    {
        dept[i] = id[i+1];
    }
    dept[2] = '\0';
    if(strcmp(dept,"CS"))
    {
        printf("Computer Science Student");
    }
    else
    {
        printf("Other Department");
    }
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP374)