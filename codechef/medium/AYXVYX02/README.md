# AYXVYX02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Duplicate Student ID Check

You are helping a school administrator with a data entry task. They need a simple program to check for errors. You are given a list of 10 student ID numbers that have been entered into the system. Your task is to find the first student ID that appears more than once in the list. If all IDs are unique, the program should indicate that.

### Input Format
- A single line containing 10 space-separated integers.
### Output Format
- If a duplicate is found, print the first number that is repeated.
- If there are no duplicates, print "No duplicates".
### Sample 1:
Input
Output

```
101 102 103 104 102 105 106 107 108 109
```

```
102
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-29T16:45:12.194Z  

```c_cpp
#include <stdio.h>
int main()
{
 int i,j,k,n=10,a[10],c=0;
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=i+1;j<n;j++)
     {
         for(k=j;k<n-1;k++)
         {
             if(a[i]==a[j])
             {
                printf("%d",a[i]); 
                c++;
                break;
             }
         }
     }
 }
 if(c==0)
 {
     printf("No duplicates");
 }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AYXVYX02)