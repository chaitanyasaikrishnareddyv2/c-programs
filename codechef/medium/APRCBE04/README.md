# APRCBE04

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Count Vowels and Consonants

You are given a sentence. Your task is to write a program to count the number of vowels and consonants in the given sentence.

Spaces, digits, and special characters should be ignored. In addition, you must display the calculation by printing all vowels and consonants found before showing their counts.

### Input Format
- A single line string S (the sentence).
### Output Format
- Print the original sentence.
- Print all vowels found and their count.
- Print all consonants found and their count.
### Constraints
- 1 ≤ |S| ≤ 100
- String S may contain letters, spaces, digits, and special characters.
### Sample 1:
Input
Output

```
Hello World
```

```
Sentence: Hello World
Vowels: e o o 
Total: 3
Consonants: H l l W r l d 
Total: 7
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T15:16:22.896Z  

```c_cpp
#include <stdio.h>
#include<string.h>
#include <ctype.h>  

int main() {
    char str1[105], str2[105] = {0};
    int vowels = 0, consonants = 0;

    fgets(str1, sizeof(str1), stdin);

    printf("Sentence: %s\n",str1);
    

printf("Vowels: ");
    for(int i = 0;i<strlen(str1);i++)
    {
        if(str1[i] =='a'||str1[i] == 'e'||str1[i] == 'i'||str1[i] == 'o'||str1[i] == 'u'||str1[i] == 'A'||str1[i] == 'E'||str1[i] == 'I'||str1[i] =='O'||str1[i] == 'U')
        {
            vowels++;
            str2[vowels-1] = str1[i];
            printf("%c ",str2[vowels-1]);
        }
        
    }
    printf("\nTotal: %d\n",vowels);
    printf("Consonants: ");
    for(int i = 0;i<strlen(str1);i++)
    {
        
        
           if((strchr(str2,str1[i]) == NULL)&&str1[i]!=" ")
            {
            printf("%c ",str1[i]);
            consonants++;
            }
       
    }
    printf("\nTotal: %d",consonants-1);
    
    

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/APRCBE04)