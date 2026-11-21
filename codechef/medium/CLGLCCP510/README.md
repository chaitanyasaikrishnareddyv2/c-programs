# CLGLCCP510

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Employee Data Input and Display

Complete the program to manage details of 4 employees using an array of structures.

 **Your task:** 

- Declare an array named employees of type struct Employee with size 4.
- Complete the print statement to display each employee’s name and salary.
### Sample 1:
Input
Output

```
Rajesh 47000
Neha 53000
Karan 49000
Anita 51000
```

```
Employee 1: Name = Rajesh, Salary = 47000
Employee 2: Name = Neha, Salary = 53000
Employee 3: Name = Karan, Salary = 49000
Employee 4: Name = Anita, Salary = 51000
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T16:09:19.482Z  

```c_cpp
#include <stdio.h>

struct Employee {
    char name[30];
    int salary;
};

int main() {
   //Your task: Declare array of employees here
    struct Employee employees[4];
   
    for (int i = 0; i < 4; i++) {
        scanf("%s %d", employees[i].name, &employees[i].salary);
    }
    
    // Your task: Print all employee details here
    for (int i = 0; i < 4; i++) {
        printf("Employee %d: Name = %s, Salary = %d\n", i + 1, employees[i].name, employees[i].salary);
    }

    return 0;
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP510)