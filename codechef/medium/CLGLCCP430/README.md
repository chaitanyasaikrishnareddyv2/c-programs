# CLGLCCP430

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### String Comparison Using strcmp in a Void Function

Write a C program that reads two strings from the user and uses a void function with `strcmp()` to check and print whether they are equal or not.

 **Input Format:** 

- First string (without spaces)
- Second string (without spaces)

 **Steps to Complete:** 

- Define a void function that accepts two strings as parameters.
- Use strcmp() inside the function to compare the strings.
- Print "Strings are equal" if they match, otherwise print "Strings are not equal".
### Sample 1:
Input
Output

```
hello
hello
```

```
Strings are equal
```

### Sample 2:
Input
Output

```
hello
world
```

```
Strings are not equal
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T18:54:47.350Z  

```c_cpp
#include <stdio.h>
#include <string.h>

void compareStrings(char s1[],char s2[]);
int main() {
    char s1[100], s2[100];

scanf("%d",&s1);
scanf("%d",&s2);
compareStrings(s1,s2);
return 0;
}
void compareStrings(char s1[],char s2[])
{
if(strcmp(s1,s2) == 0)
{
    printf("Strings are equal");
}
else
{
    printf("Strings are not equal");
}
}


```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP430)