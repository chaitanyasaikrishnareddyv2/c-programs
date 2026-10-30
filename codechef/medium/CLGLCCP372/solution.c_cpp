#include <stdio.h>

int main() {
    // Full student ID
    char studentID[] = "CS2025A9";

    // Array to store the department code (2 characters + null terminator)
    char deptCode[3];

    int start = 0;    // Start from the beginning
    int length = 2;   // Extract 2 characters

    // Extract department code using loop
    for (int i = 0; i < length; i++) {
        deptCode[i] = studentID[start + i];
    }
    deptCode[length] = '\0';  // Add null terminator

    // Print the extracted department code
    printf("Department Code: %s\n", deptCode);

    return 0;
}