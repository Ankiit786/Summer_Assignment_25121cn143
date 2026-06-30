#include <stdio.h>
#include <string.h>

int main() {
    int n = 5;
    char words[5][50] = {
        "Elephant",
        "Cat",
        "Mongoose",
        "Dog",
        "Hippo"
    };
    char temp[50];

    // Sorting based on string length
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                // Swap words
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s (Length: %lu)\n", words[i], strlen(words[i]));
    }

    return 0;
}