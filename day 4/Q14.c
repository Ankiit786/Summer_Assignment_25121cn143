#include <stdio.h>

int main() {
    int n = 10; // Find series up to 10th term
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci Series: %d %d ", a, b);
    for (int i = 2; i < n; i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        printf("%d ", nextTerm);
    }
    return 0;
}   