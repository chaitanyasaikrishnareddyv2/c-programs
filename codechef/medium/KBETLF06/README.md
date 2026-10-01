# KBETLF06

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Job Role Eligibility Checker

You are building a small module for an HR system to pre-screen a job candidate. The system needs to check the candidate's eligibility for three different roles based on their age, current salary, and if they have a driver's license.

The eligibility criteria are as follows:

- Role A: Candidate must be between 18 and 65 years old (inclusive) and must have a driver’s license.
- Role B: Candidate must have a salary greater than 40,000 or be younger than 30 and have a driver’s license.
- Role C: Candidate must be at least 21 years old and have a salary of at least 30,000.

After the initial check, simulate the candidate’s birthday by increasing their age by 1 and re-check all roles.

 **Input Format** 

- No input required. Already given in the IDE.

 **Output Format** 

- Print the results of each check (1 for true, 0 for false).

 **Expected Output** 

```
Initial Candidate Data:
Age: <value>, Salary: <value>, Has License: <value>

--- Initial Role Eligibility ---
Role 1: Eligible = <value>
Role 2: Eligible = <value>
Role 3: Eligible = <value>

--- Eligibility After Birthday (Age: <value>) ---
Role 1: Eligible = <value>
Role 2: Eligible = <value>
Role 3: Eligible = <value>

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T02:12:44.205Z  

```cpp
#include <stdio.h>
#include <stdbool.h>

int main() {
    int age = 25;
    float salary = 50000.0;
    _Bool hasLicense = 1;

    printf("Initial Candidate Data:\n");
    printf("Age: %d, Salary: %.1f, Has License: %d\n\n", age, salary, hasLicense);

    // --- Initial Eligibility Checks ---
    printf("--- Initial Role Eligibility ---\n");
    // TODO: Calculate eligibility for three roles.
    
    _Bool eligible1 =  ( age >= 18 && age <= 65);// Your expression here
    
    _Bool eligible2 = (salary == 40000.0 || (age < 30 && hasLicense));// Your expression here
    
    _Bool eligible3 = (age >= 21 && salary >= 30000.0);// Your expression here

  

    printf("Role 1: Eligible = %d\n", eligible1);
    printf("Role 2: Eligible = %d\n", eligible2);
    printf("Role 3: Eligible = %d\n\n", eligible3);

    // --- Recalculation After Birthday ---
    // TODO: Increment the candidate's age by 1.
    int age1 = age + 1;
    

    printf("--- Eligibility After Birthday (Age: %d) ---\n", age1);
    // TODO: Recalculate all three boolean flags with the new age.
    eligible1 = (age1 >= 18 && age1 <= 65);// Your expression here
    eligible2 = (salary >= 40000.0 || (age1 <= 30 && hasLicense));// Your expression here
    eligible3 = (age1 >= 21 && salary >= 30000.0 );
    // Your expression here


    printf("Role 1: Eligible = %d\n", eligible1);
    printf("Role 2: Eligible = %d\n", eligible2);
    printf("Role 3: Eligible = %d\n", eligible3);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF06)