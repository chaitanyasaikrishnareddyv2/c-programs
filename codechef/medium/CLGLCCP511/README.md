# CLGLCCP511

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Student Grade Filter Using Array of Structures

Write a C program that uses an array of structures to manage student information. The program should display the names of students who have scored above 75 marks.

 **Steps to Complete:** 

- Declare an array of type struct Student with size 5.
- Use a loop to input the name and marks for each student.
- Use another loop to check which students have marks greater than 75.
- Print the names of the students who scored more than 75.
### Sample 1:
Input
Output

```
Riya 82
Sahil 70
Meera 88
Amit 66
Divya 79
```

```
Students scoring more than 75:
Riya
Meera
Divya
```

### Sample 2:
Input
Output

```
Karan 68
Sana 82
Vikram 77
Neha 60
Rohit 90
```

```
Students scoring more than 75:
Sana
Vikram
Rohit
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:27:12.758Z  

```c_cpp
#include <stdio.h>

struct Student {
    char name[30];
    int marks;
};

int main() {
    int i;
   struct Student student[5];
   for( i=0;i<5;i++)
   {
       scanf("%s %d",student[i].name,&student[i].marks);
   }
   
       
   
    printf("Students scoring more than 75:\n");
    for ( i = 0;i<5;i++)
    {
        if (student[i].marks>75)
        {
            printf("%s\n",student[i].name);
        }
    }
    
    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP511)