#include <stdio.h>

int main() {
    int r, c;
    int a[10][10];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Row-wise sum calculation
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}