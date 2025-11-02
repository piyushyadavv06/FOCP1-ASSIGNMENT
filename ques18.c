#include <stdio.h>
int main() {
    int arr[100];
    int n, i, j;
    int found = 0;  
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size!\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nDuplicate elements: ");

    for (i = 0; i < n; i++) {
        int count = 0;
        int printed = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                printed = 1;
                break;
            }
        }

        if (printed)
            continue; 
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 0) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
    printf("\n");
    return 0;
}