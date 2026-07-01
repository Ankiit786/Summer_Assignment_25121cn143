#include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("=== Welcome to the Mini Programming Quiz ===\n\n");

    // Question 1
    printf("Q1. Which data type is used to store text in C?\n");
    printf("A. int\nB. char\nC. float\nD. String\n");
    printf("Your Answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B (char).\n\n");
    }

    // Question 2
    printf("Q2. Which keyword is used to return a value from a function?\n");
    printf("A. back\nB. break\nC. return\nD. exit\n");
    printf("Your Answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C (return).\n\n");
    }

    // Question 3
    printf("Q3. What is the correct format specifier for a double value in printf()?\n");
    printf("A. %%d\nB. %%f\nC. %%lf\nD. %%c\n");
    printf("Your Answer (A/B/C/D): ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b' || answer == 'C' || answer == 'c') {
        // Both %f and %lf are standard/acceptable in modern printf, though %f is default
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B or C.\n\n");
    }

    // Final Score Calculation
    printf("--- Quiz Completed! ---\n");
    printf("Your Final Score: %d out of 3\n", score);
    
    if (score == 3) {
        printf("Excellent performance! Perfect score.\n");
    } else if (score == 2) {
        printf("Good job! Keep practicing.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}