# NHOMJL06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Secret Code Amplifier

You're a junior spy who has intercepted an enemy message. The message is a jumble of letters and numbers. Your mission is to write a C program that can process these messages.

The program must:

- Read a single alphanumeric string.
- Loop through the string and extract all the digits in the order they appear.
- Combine these digits into a new string, convert it to an integer, and multiply it by 2 to get the final secret code.
- Print only the final integer code.
### Input Format
- A single line containing an alphanumeric string.
### Output Format
- A single integer representing the final calculated secret code.
### Sample 1:
Input
Output

```
a1ph4num3r1c
```

```
2886
```

### Explanation:

Because the digits are 1, 4, 3, 1, forming the number 1431. 1431 * 2 = 2886

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T19:24:34.632Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
    char message[101];
    char d[101];
    scanf("%s", message);

        // --- YOUR CODE HERE ---
       int j=0;
        int len = strlen(message);
        for(int i = 0;i<len;i++)
        {
            if(message[i]>='0'&&message[i]<='9')
            {
                d[j] = message[i];
                j++;
            }
        }
        d[j] = '0';
    int f = 0;
    for(int i=0;i<j;i++)
    {
        f=f*10+(d[i]-'0');
    }
    f=f*2;
        printf("%d",f);
        
        
    

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL06)