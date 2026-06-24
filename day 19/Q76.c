#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];
    int primary_sum = 0, secondary_sum = 0;

    // Input elements for the square matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculating both diagonal sums in a single pass
    for (int i = 0; i < n; i++) {
        primary_sum += matrix[i][i];            // Condition for primary diagonal: row index == col index
        secondary_sum += matrix[i][n - 1 - i];  // Condition for secondary diagonal: col index == n - 1 - row index
    }

    // Displaying the results
    printf("\nSum of Primary Diagonal elements: %d", primary_sum);
    printf("\nSum of Secondary Diagonal elements: %d\n", secondary_sum);

    return 0;
}