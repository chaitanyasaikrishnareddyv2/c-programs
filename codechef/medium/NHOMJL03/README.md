# NHOMJL03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Secret Code Reverser

You’ve intercepted a  **secret message**  from a hidden source!

The encoding scheme is clever:

- Each letter’s case is swapped - uppercase becomes lowercase and vice versa.
- The entire string is then reversed.

Your mission is to decode this message.

Write a C program that takes a single encoded string and prints the  **decoded message**.

### Input Format
- A single string containing only alphabetic characters, with a maximum length of 100.
### Output Format
- Print a single line containing the decoded string.
### Sample 1:
Input
Output

```
HeLLo
```

```
oLlEh
```

### Sample 2:
Input
Output

```
pROGRAM
```

```
margorP
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T18:35:26.677Z  

```c_cpp
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[101];
    scanf("%s", word);
    int len = strlen(word);

     // --- YOUR CODE HERE ---
    for (int i = 0;i<len;i++)
    {
        if(word[i] == tolower(word[i]))
        {
            word[i]==toupper(word[i]);
        }
        else
        {
            word[i]==tolower(word[i]);
        }
        
    }
    for (int i = len-1;i>=0;i--){
    printf("%c",word[i]);
    }
    
    

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL03)