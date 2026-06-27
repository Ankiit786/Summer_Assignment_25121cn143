#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    // Using %[^\n] to read strings with spaces
    scanf(" %[^\n]", str); 

    // Loop through the string
    while (str[i] != '\0') {
        // Check for space, tab, or newline to identify a word boundary
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            if (i > 0 && str[i-1] != ' ' && str[i-1] != '\t') {
                words++;
            }
        }
        i++;
    }
    
    // Add 1 for the last word if the sentence wasn't empty or ending in a space
    if (i > 0 && str[i-1] != ' ' && str[i-1] != '\t') {
        words++;
    }

    printf("Total number of words: %d\n", words);

    return 0;
}