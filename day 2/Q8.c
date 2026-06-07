#include <stdio.h>

int main() {
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num; // Store original number for comparison

    // Reverse the digits
    while (temp > 0) {
        rem = temp % 10;       // Extract last digit
        rev = rev * 10 + rem;  // Append to reversed number
        temp /= 10;            // Remove last digit
    }

    // Check if original equals reversed
    if (num == rev) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}   