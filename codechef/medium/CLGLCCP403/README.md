# CLGLCCP403

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Format Age Message

Write a C program that reads a person's name and age. Use `sprintf()` to convert the age (an integer) into a message and print the message.

 **Steps to complete:** 

- Declare char name[50] and int age.
- Declare char message[100] to hold the final string.
- Read the name using scanf() (use %s for a single word).
- Read the age as an integer using scanf().
- Use sprintf() to build the message: "name is age years old".
- Print the final message using printf().
### Sample 1:
Input
Output

```
Abhinav
27

```

```
Abhinav is 27 years old
```

### Sample 2:
Input
Output

```
Rocky
24
```

```
Rocky is 24 years old
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T17:36:46.952Z  

```c_cpp
#include <stdio.h>

int main() {
    
    // write your code here
char name[50];
int age;
scanf("%s",name);
scanf("%d",&age);
sprintf(name,"%s is %d years old",name,age);
printf("%s",name);
    return 0;
}


```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP403)