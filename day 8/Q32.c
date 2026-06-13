#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            // Prints the current row number 'i' instead of the column tracker 'j'
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}