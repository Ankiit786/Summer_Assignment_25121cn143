#include <stdio.h>

int main() {
    int age;
    char citizen;

    printf("=== Voting Eligibility System ===\n");
    
    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear input buffer before reading character
    printf("Are you a citizen of the country? (Y/N): ");
    scanf(" %c", &citizen);

    if (age >= 18 && (citizen == 'Y' || citizen == 'y')) {
        printf("\nResult: You are ELIGIBLE to vote.\n");
    } else {
        printf("\nResult: You are NOT ELIGIBLE to vote.\n");
        if (age < 18) {
            printf("Reason: Minimum age requirement is 18 years (You are %d).\n", age);
        }
        if (citizen != 'Y' && citizen != 'y') {
            printf("Reason: Citizenship is required to vote.\n");
        }
    }

    return 0;
}