# NHOMJL01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simple Email Validator

Chef is building a basic user signup system and wants to ensure that users provide valid email addresses.

To keep things simple, Chef defines an email as valid only if it satisfies both of the following rules:

- The email must contain exactly one '@' symbol.
- The email must end with the string ".com" (including the dot).

Write a C program that reads a single string (the email) and prints "Valid" if it meets both rules, or "Invalid" otherwise.

### Input Format
- A single line containing a string email (without spaces).
### Output Format
- Print "Valid" if the email satisfies both rules.
- Otherwise, print "Invalid".
### Constraints
- 1 ≤ length of email ≤ 100
### Sample 1:
Input
Output

```
user@example.com
```

```
Valid
```

### Sample 2:
Input
Output

```
user@example.org
```

```
Invalid
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T18:05:30.750Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char email[101];
    scanf("%s", email);

    int atCount = 0;
    int len = strlen(email);

    for(int i = 0;i<len;i++)
    {
        if(email[i] =='@')
        {
            atCount++;
        }
    }
    
    

    // Check for exactly one '@' and ends with ".com"
    if(len>=4&&strcmp(&email[len-4],".com") == 0 && atCount ==1)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    
    

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL01)