# AYXVYX09

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Warehouse Part Finder

You are in charge of a small warehouse with a 4x4 grid of storage shelves. Each shelf holds a unique part, identified by an integer part number. Your task is to build a system that can quickly find the location of any part.

You will be given the 16 part numbers that fill the 4x4 grid, followed by a single target part number to search for. If the part is found, print its location as `row col`. If the part is not in the warehouse, print `Part not found`.

### Input Format
- The first 4 lines of input contain the integer part numbers to fill the 4x4 matrix, row by row (each line contains 4 integers).
- The 5th line contains a single integer, the target part number to find.
### Output Format
- If the target is found, print a single line: Found at: row col (0-indexed).
- If the target is not found, print Part not found.
### Sample 1:
Input
Output

```
10 20 30 40
50 60 70 80
90 11 22 33
44 55 66 77
22
```

```
Found at: 2 2
```

### Sample 2:
Input
Output

```
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
20
```

```
Part not found
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T17:25:09.013Z  

```c_cpp
#include <stdio.h>

int main() {
    int warehouse[4][4];
    int target;
    int i, j,c;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &warehouse[i][j]);
        }
    }

    scanf("%d", &target);
    for(i = 0;i<4;i++)
    {
        for(j = 0;j<4;j++)
        {
            if(target==warehouse[i][j])
            {
                printf("Found at: %d %d",i,j);
                c++;
                break;
            }
        }
    }

    if(c==0)
    {
        printf("Part not found");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX09)