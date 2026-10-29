# AYXVYX06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Score Booster

A game developer wants to boost player scores for a special event. The plan is to take the current scores and replace them with their squared values. For example, a score of 8 becomes 64.

Your task is to write a program that takes exactly 10 integer scores, calculates the square of each score, and updates the array in-place. Finally, print the new, boosted scores.

### Input Format
- A single line containing 10 integers separated by spaces.
### Output Format
- A single line containing the 10 new scores (the squared values of the input), separated by spaces.
### Sample 1:
Input
Output

```
2 4 5 -1 0 10 3 7 8 6
```

```
4 16 25 1 0 100 9 49 64 36
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:06:57.594Z  

```c_cpp
#include <stdio.h>

int main() {
    int scores[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
        scores[i]=scores[i]*scores[i];
    }

    // --- Your Code Here ---
    
    
    

    // --- End of Your Code ---

    for (i = 0; i < 10; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX06)