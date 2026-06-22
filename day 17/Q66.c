#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0, isDuplicate;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements:\n");
    for(i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements:\n");
    for(i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int unionArr[n1 + n2];

    // Add elements from the first array (handling internal duplicates)
    for(i = 0; i < n1; i++) {
        isDuplicate = 0;
        for(j = 0; j < k; j++) {
            if(unionArr[j] == arr1[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unionArr[k++] = arr1[i];
        }
    }

    // Add unique elements from the second array
    for(i = 0; i < n2; i++) {
        isDuplicate = 0;
        for(j = 0; j < k; j++) {
            if(unionArr[j] == arr2[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of the two arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }
    printf("\n");

    return 0;
}