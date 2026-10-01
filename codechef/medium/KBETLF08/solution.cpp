#include <stdio.h>

int main() {
 
    int a = 3, b = 2, c = 5;
    // Your code goes here 
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int a1 = 3, b1 = 2, c1 = 5;
    a1 *= b1 += c1 - a1;
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    int a2 = 3, b2 = 2, c2 = 5;
    a2 *= (b2+=(c2-a2));
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    

    return 0;
}
