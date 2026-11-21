# CLGLCCP503

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Create a structure for a student

In this example, we will create a structure to represent a student, which includes the name, age, and GPA. This will help us understand how to declare and initialize structure variables effectively.

 **Expected Output** 

```
Student Name: John Doe
Age: 20
GPA: 3.50

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-21T15:51:43.791Z  

```c_cpp
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student myStudent = {"John Doe",20,3.50}; // Declare and initialize the student structure
    
    printf("Student Name: %s\n", myStudent.name);
    printf("Age: %d\n", myStudent.age);
    printf("GPA: %.2f\n", myStudent.gpa);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP503)