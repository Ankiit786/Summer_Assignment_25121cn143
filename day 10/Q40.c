#include <stdio.h>

int main() {
    int n = 5; // Number of rows

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print increasing alphabetical characters
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        
        // Print decreasing alphabetical characters
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}