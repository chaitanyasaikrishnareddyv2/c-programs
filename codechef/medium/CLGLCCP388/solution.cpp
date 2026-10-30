#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a product code string
    char productCode[] = "ABC123-XYZ456";
    
    // Declare a destination string with enough space
    char destination[20];

    // Use strncpy to copy the first 12 characters from productCode to destination
    strncpy(destination, productCode, 12);
    
    // Manually null-terminate the destination string
    destination[12] = '\0';

    // Print the copied part of the product code
    printf("Copied product code: %s\n", destination);
    
    return 0;
}