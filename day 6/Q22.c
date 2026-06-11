#include <stdio.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * (1 << i); // Using bitwise shift for 2^i
        binary /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}   