#include <stdio.h>
#include <string.h>

void findFirstRepeating(char *str) {
    int visited[256] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]] == 1) {
            printf("The first repeating character is: '%c'\n", str[i]);
            return;
        }
        visited[(unsigned char)str[i]] = 1;
    }

    printf("No repeating characters found.\n");
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    findFirstRepeating(str);
    return 0;
}