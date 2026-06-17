#include <stdio.h>

/**
 * Function to check whether a given number is a perfect number.
 * Returns 1 if true, 0 if false.
 */
int isPerfect(int num) {
    // Perfect numbers must be strictly greater than 1
    if (num <= 1) {
        return 0;
    }

    int sum = 1; // 1 is a proper divisor for all numbers > 1

    // Iterate up to the square root of the number for optimized efficiency
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num) {
                sum = sum + i + (num / i);
            } else {
                sum = sum + i; // If divisors are equal (perfect square), add only once
            }
        }
    }

    return (sum == num);
}

int main() {
    int number;
    printf("Enter an integer to check for perfect number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPerfect(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}