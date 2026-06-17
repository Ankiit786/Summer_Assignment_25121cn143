#include <stdio.h>

/**
 * Function to generate and print the Fibonacci sequence up to n terms.
 */
void printFibonacci(int n) {
    if (n <= 0) {
        printf("Number of terms must be greater than 0.\n");
        return;
    }

    unsigned long long t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series (%d terms): ", n);
    for (int i = 1; i <= n; ++i) {
        printf("%llu", t1);
        if (i < n) {
            printf(", ");
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Enter the number of Fibonacci terms to display: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printFibonacci(terms);
    return 0;
}