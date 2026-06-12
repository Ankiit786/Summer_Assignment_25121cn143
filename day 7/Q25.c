#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) return 1; // Base case
    return n * factorial(n - 1); // Recursive step
}

int main() {
    int num = 5;
    printf("Factorial of %d is %llu\n", num, factorial(num));
    return 0;
}   