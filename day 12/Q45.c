#include <stdio.h>

/**
 * Function to check whether a given number is a palindrome.
 * Returns 1 if true, 0 if false.
 */
int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    // Negative numbers are not palindromes due to the minus sign
    if (num < 0) {
        return 0;
    }

    while (num != 0) {
        remainder = num % 10;
        
        // Prevent integer overflow before multiplication
        if (reversed > (2147483647 - remainder) / 10) {
            return 0; 
        }
        
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int number;
    printf("Enter an integer to check for palindrome: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}