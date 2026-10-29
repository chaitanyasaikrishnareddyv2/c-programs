#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {11, 22, 33},
        {44, 55, 66},
        {77, 88, 99}
    };

    // Row-major traversal: Print row by row
    printf("Row-major traversal:\n");
    for (int i = 0; i < 3; i++) {          // Iterate over rows
        for (int j = 0; j < 3; j++) {      // Iterate over columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Column-major traversal: Print column by column
    printf("\nColumn-major traversal:\n");
    for (int j = 0; j < 3; j++) {          // Iterate over columns
        for (int i = 0; i < 3; i++) {      // Iterate over rows
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}