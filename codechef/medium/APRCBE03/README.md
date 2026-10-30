# APRCBE03

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Two-Player Name Showdown

You are building a simple score-keeping utility for a two-player game. You need to process the players' names to display them correctly and determine the alphabetical order for the leaderboard.

Given:

- Player 1: First name "Ada", Last name "Lovelace"
- Player 2: First name "Grace", Last name "Hopper"

 **Task** 

- Combine names as fullName1 and fullName2 (first + space + last).
- Print each full name with its length.
- Print: First letter of Player 1’s first name Last letter of Player 2’s full name
- Check if fullName1 comes before fullName2 alphabetically. Store result in a _Bool.

 **Input Format** 

- There is no input for this program.

 **Output Format** 

- The output should display the constructed full names, their respective lengths, the specific characters requested, and the result of the alphabetical comparison as a boolean value (1 for yes, 0 for no).

 **Expected Output** 

```
Player 1: <value>
Player 2: <value>
Length of Player 1's name: <value>
Length of Player 2's name: <value>
Player 1's Initial: <value>
Player 2's Last Character: <value>
Does Player 1's name come first alphabetically: <value>

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-30T12:24:28.980Z  

```c_cpp
#include <stdio.h>
#include <string.h>

int main() {
   
    char firstName1[50] = "Ada";
    char lastName1[] = " Lovelace";
   
    // Player 2 names
    char firstName2[50] = "Grace";
    char lastName2[] = " Hopper";
    

     strcat(firstName1,lastName1);
    strcat(firstName2,lastName2);


    printf("Player 1: %s\n", firstName1);
    printf("Player 2: %s\n", firstName2);

   int len1 = strlen(firstName1);
   int len2 = strlen(firstName2);
   
    printf("Length of Player 1's name: %d\n", len1);
    printf("Length of Player 2's name: %d\n", len2);

 int p1_initial = firstName1[0];
 int p2_last_char = lastName2[6];
     
    printf("Player 1's Initial: %c\n", p1_initial);
    printf("Player 2's Last Character: %c\n", p2_last_char);

  int isP1NameFirst = (firstName1[0]<firstName2[0])?1:0;
    
   
    printf("Does Player 1's name come first alphabetically: %d\n", isP1NameFirst);

    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/APRCBE03)