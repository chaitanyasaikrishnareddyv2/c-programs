# AYXVYX07

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Top Scorer Position

A teacher needs your help! You are given the test scores of 10 students. Your task is to write a program that reads these 10 scores, finds the highest score, and identifies which student got it. Remember, student positions are 0-indexed, so the first student is at position 0, the second at 1, and so on. Print the position (index) and the score of the top-performing student.

### Input Format
- A single line containing 10 space-separated integers representing the students' scores.
### Output Format
- Print two integers separated by a space: the index of the highest score, followed by the highest score itself. If the highest score appears more than once, print the index of its first occurrence.
### Sample 1:
Input
Output

```
85 92 78 95 88 90 76 99 81 94
```

```
7 99
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:15:39.384Z  

```c_cpp
#include <stdio.h>

int main() {
    int scores[10];
    int i,l;

    for (i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
    }
l=scores[0];
for(i=0;i<10;i++)
{
    if(scores[i]>l)
    {
        l=scores[i];
    }
}
    for(i=0;i<10;i++)
    {
        if(scores[i]==l)
        break;
    }

    printf("%d %d\n", i, l);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX07)