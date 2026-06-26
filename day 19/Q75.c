#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);

    int a[100][100], transpose[100][100];

    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    // Computing the transpose by swapping indices
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < c; ++i) {
        for (int j = 0; j < r; ++j) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}