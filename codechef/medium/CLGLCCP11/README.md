# CLGLCCP11

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Valid Code Block Usage

Which of the following C code snippets correctly defines the `main` function with a code block?

 **Option 1:** 

```
main()
    printf("Hello!");

```

 **Option 2:** 

```
main() {
    printf("Hello!");
}

```

 **Option 3:** 

```
main() [
    printf("Hello!");
]

```

 **Option 4:** 

```
main {
    printf("Hello!");
}

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-26T22:09:08.683Z  

```cpp
#include <stdio.h>

int main()
    {
        printf("Breakfast, Lunch, dinner!");
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/CLGLCCP11)