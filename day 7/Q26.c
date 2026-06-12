#include <stdio.h>

// Recursive function to compute nth Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;       // Base case 1
    if (n == 1) return 1;       // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
}

int main() {
    int count, i;
    printf("Enter the number of Fibonacci terms you want: ");
    scanf("%d", &count);

    printf("Fibonacci series: ");
    for (i = 0; i < count; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}   