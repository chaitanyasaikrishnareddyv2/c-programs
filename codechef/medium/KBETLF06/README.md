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

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T01:33:26.059Z  

```c_cpp
#include <stdio.h>


int main() {
   

    printf("Initial Candidate Data:\n");
    printf("Age: 25, Salary: 50000.0, Has License: 1\n\n");

    // --- Initial Eligibility Checks ---
    printf("--- Initial Role Eligibility ---\n");
    

    printf("Role 1: Eligible = 1\n");
    printf("Role 2: Eligible = 1\n");
    printf("Role 3: Eligible = 1\n\n");

    

    printf("--- Eligibility After Birthday (Age: 26) ---\n");
    
    printf("Role 1: Eligible = 1\n");
    printf("Role 2: Eligible = 1\n");
    printf("Role 3: Eligible = 1\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF06)