#include <stdio.h>
#include <string.h>

int main() {
    int n = 5;
    char names[5][50] = {
        "Rahul",
        "Amit",
        "Zayan",
        "Binod",
        "Deepak"
    };
    char temp[50];

    // Bubble sort to sort names alphabetically
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                // Swap names
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Names sorted alphabetically:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}