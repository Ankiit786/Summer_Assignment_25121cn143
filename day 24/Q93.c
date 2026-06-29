#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // If lengths are not equal, they cannot be rotations
    if (len1 != len2) {
        return 0;
    }

    // Create a temporary buffer to hold s1 + s1
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of temp
    if (strstr(temp, s2) != NULL) {
        return 1;
    }
    
    return 0;
}

int main() {
    char s1[] = "abcd";
    char s2[] = "cdab";

    if (isRotation(s1, s2)) {
        printf("'%s' is a rotation of '%s'\n", s2, s1);
    } else {
        printf("'%s' is NOT a rotation of '%s'\n", s2, s1);
    }

    return 0;
}