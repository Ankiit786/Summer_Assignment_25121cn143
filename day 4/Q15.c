#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, sum = 0, n = 0, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    // Count number of digits
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    // Calculate sum of digits raised to power n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp /= 10;
    }

    if (sum == originalNum)
        printf("%d is an Armstrong number.", originalNum);
    else
        printf("%d is not an Armstrong number.", originalNum);

    return 0;
}   