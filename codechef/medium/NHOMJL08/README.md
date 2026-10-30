# NHOMJL08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### First Vowel Locator

You're building a simple  **text analysis tool**.

Your task is to find the  **first vowel**  that appears in a given word. The program must:

- Take a single case-insensitive word (i.e., you should treat A and a the same).
- Identify the first vowel (a, e, i, o, u) in the word.
- Print the lowercase version of that vowel along with its 0-based index.

If the word does  **not contain any vowel**, print "No vowel found".

### Input Format
- A single line containing a word (no spaces).
### Output Format
- If a vowel is found, print the lowercase vowel, the text " at position ", and its index.
- If no vowel is found, print "No vowel found".
### Sample 1:
Input
Output

```
pIckLe
```

```
i at position 1
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T20:12:23.613Z  

```c_cpp
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char inputstr[101];
    scanf("%s", inputstr);

    char vowels[] = "aeiou";
    
    int i, j;
int f = 0;
    // Your code goes here 
    for(i = 0;i<strlen(inputstr);i++)
    {
    for(j = 0;j<strlen(vowels);j++)
    {
        if(tolower(inputstr[i]) == vowels[j])
        {
            f=1;
            break;
        }
    }
    if(f>0)
    {
        break;
    }
    }
    if(f>0)
    {
        printf("%c at position %d",vowels[j],i);
    }
    if (f == 0) {
        printf("No vowel found\n");
    }

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/NHOMJL08)