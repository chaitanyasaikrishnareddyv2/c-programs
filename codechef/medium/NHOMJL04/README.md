# NHOMJL04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### GST Bill Calculator

You are building a  **billing tool**  for a local shop. Every receipt line contains a  **price**  marked with the string "`Rs. `" followed by the numeric amount.

Your task is to:

- Extract the price from the string.
- Add 18% GST to the price.
- Print the final bill amount, formatted to two decimal places, as: Final Bill: Rs. XXX.XX
### Input Format
- A single line of text that contains the substring "Rs. " followed by a valid floating-point number.
### Output Format
- A single line of text formatted as "Final Bill: Rs. XXX.XX".
### Sample 1:
Input
Output

```
Rs. 492.75
```

```
Final Bill: Rs. 581.44
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T18:44:39.422Z  

```c_cpp
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char input[101];
    char priceStr[20];
    int i; float j;

    // Read the full line
    fgets(input, sizeof(input), stdin);


    char *ptr = strstr(input,"Rs. ");
    if(ptr !=NULL)
    {
        j = atof(ptr+4);
    }
        double d = 1.18*j;
        

        printf("Final Bill: Rs. %.2f\n", d);
    

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL04)