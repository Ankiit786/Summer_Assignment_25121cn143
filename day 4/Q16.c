#include <stdio.h>

int isArmstrong(int num) {
    int original = num, remainder, sum = 0;
    int n = 0;

    // Calculate number of digits
    while (original != 0) {
        original /= 10;
        ++n;
    }

    original = num;

    // Sum the nth powers of its digits
    while (original != 0) {
        remainder = original % 10;
        int power = 1;
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }
        sum += power;
        original /= 10;
    }

    return sum == num;
}

int main() {
    int lower, upper;

    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}   