#include <stdio.h>
#include <math.h>

/**
 * Function to check whether a given number is an Armstrong number.
 * Returns 1 if true, 0 if false.
 */
int isArmstrong(int num) {
    int original = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    int remainder;

    if (num < 0) {
        return 0;
    }

    // Count the total number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        // round() helps avoid precision issues with pow() on integers
        sum += (int)round(pow(remainder, digits));
        temp /= 10;
    }

    return (original == sum);
}

int main() {
    int number;
    printf("Enter an integer to check for Armstrong: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}