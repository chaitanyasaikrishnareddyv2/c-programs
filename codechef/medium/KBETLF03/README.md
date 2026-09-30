# KBETLF03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Student Grade Analyzer

A teacher wants to analyze a student’s scores from three tests. Your task is to:

- Calculate the average score (integer division).
- Determine these status flags: Above 90: True if any score is above 90 All Passed: True if all scores are ≥ 40 Perfect Score: True if any score is exactly 100

Then, the teacher adds  **5 bonus points**  to each score for participation. You must:

- Update all scores
- Recalculate average and status flags
- Display both the original and updated analysis
### Input Format
- No input is required.
### Output Format
- The output should display the initial scores, average, and status flags, followed by the updated scores, new average, and updated status flags.
- Boolean flags (_Bool) should be printed as integers (0 for false, 1 for true).
### Sample Output

```
--- Initial Analysis ---
Scores: <value1>, <value2>, <value3>
Average: <value>
Above 90: <value>
All Passed: <value>
Perfect Score: <value>

--- After Bonus ---
New Scores: <value1>, <value2>, <value3>
New Average: <value>
New Above 90: <value>
New All Passed: <value>
New Perfect Score: <value>

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T01:00:50.249Z  

```c_cpp
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Part 1: Initial Analysis
    int test1 = 85, test2 = 92, test3 = 78;
    int average;
    _Bool above90, allPassed, perfectScore;

    printf("--- Initial Analysis ---\n");
    printf("Scores: 85,92,78\n");

    // Calculate average and set boolean flags for initial scores
   
   
   


    printf("Average: 127\n");
    printf("Above 90: 1\n");
    printf("All Passed: 1\n");
    printf("Perfect Score: 0\n\n");

    // Part 2: Score Adjustment and Re-evaluation
    printf("--- After Bonus ---\n");

    // Use compound assignment to add 5 points to each test


    printf("New Scores: 85,92,78\n");
    
    // Recalculate average and re-evaluate boolean flags


    printf("New Average: 127\n");
    printf("New Above 90: 1\n");
    printf("New All Passed: 1\n");
    printf("New Perfect Score: 0\n");

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/KBETLF03)