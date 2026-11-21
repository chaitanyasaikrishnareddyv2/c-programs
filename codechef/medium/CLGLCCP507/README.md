# CLGLCCP507

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Book Information Structure

Write a program to input a student’s name and score, then display whether the student has passed or failed based on the score.

 **Steps to Complete:** 

- Declare a structure variable of type Student.
- Use scanf to read the student’s name and score.
- Use an if-else statement to check if the score is greater than or equal to 40.
- If true, print Result: Pass; otherwise, print Result: Fail.
- Print the student's name and score with appropriate labels.
### Sample 1:
Input
Output

```
Abhishek
55
```

```
Result: Pass
Name: Abhishek
Score: 55
```

### Sample 2:
Input
Output

```
Gaurav
38
```

```
Result: Fail
Name: Gaurav
Score: 38
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:00:36.786Z  

```c_cpp
#include <stdio.h>
#include<string.h>
struct Student {
    char name[30];
    int score;
};

int main() {
    struct Student s1;
    scanf("%s",s1.name);
    scanf("%d",&s1.score);
if (s1.score>=40)
{
    printf("Result: Pass\n");
}
else
{
    printf("Result: Fail\n");
}
printf("Name: %s\n",s1.name);
printf("Score: %d",s1.score);
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP507)