# NHOMJL05

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Word Ring Checker

Two friends are playing a game called the  **"Word Ring"**.

They imagine a word written in a  **circular**  fashion - meaning, after the last letter, the word wraps around to the beginning.

- The first friend reads the word starting from the beginning.
- The second friend reads the same word but starts from a different position in the ring.

Both friends always read the  **same number of letters**, equal to the length of the word, wrapping around the circle if needed.

Your task is to write a C program that takes two words as input and determines if the second word is a valid rotation of the first. For example, if the word is "WATER", rotating it gives "ATERW", "TERWA", etc.

### Input Format
- The first line contains a string A - the original word read by the first friend.
- The second line contains a string B - the word read by the second friend.
### Output Format
- Print "YES" if the word B is a rotation of word A.
- Otherwise, print "NO".
### Sample 1:
Input
Output

```
waterbottle
erbottlewat
```

```
Yes
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T19:00:29.743Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);
    
    // --- START YOUR LOGIC HERE ---
int len1 = strlen(str1);
int len2 = strlen(str2);
if(len1!=len2)
{
    printf("NO\n");
    return 0;
}
    char temp[200];
    strcpy(temp,str1);
    strcat(temp,str1);
    if(strstr(temp,str2)!=NULL)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    // --- END YOUR LOGIC HERE ---

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL05)