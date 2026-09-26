#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    printf("Enter two integers: ");
    // %d matches integer data types
    scanf("%d %d", &num1, &num2);

    // Calculating sum
    sum = num1 + num2;      
    
    printf("%d + %d = %d\n", num1, num2, sum);
    return 0;
}
