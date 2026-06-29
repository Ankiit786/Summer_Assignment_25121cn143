#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findLongestWord(char *sentence, char *longest) {
    int maxLen = 0;
    int currentLen = 0;
    int startIdx = 0, maxStartIdx = 0;
    int i = 0;

    while (sentence[i] != '\0') {
        // Skip punctuation or spaces to identify word boundaries
        if (isalnum(sentence[i])) {
            if (currentLen == 0) {
                startIdx = i; // Mark start of a new word
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIdx = startIdx;
            }
            currentLen = 0; // Reset for next word
        }
        i++;
    }

    // Final check for the last word if sentence doesn't end with a space/punctuation
    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStartIdx = startIdx;
    }

    // Copy the longest word found
    strncpy(longest, &sentence[maxStartIdx], maxLen);
    longest[maxLen] = '\0'; // Null-terminate
}

int main() {
    char sentence[] = "Success consists of going from failure to failure without loss of enthusiasm.";
    char longestWord[50];

    findLongestWord(sentence, longestWord);
    printf("The longest word is: \"%s\"\n", longestWord);

    return 0;
}