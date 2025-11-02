#include <stdio.h>
int main() {
    int a[100], n, x, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\nChoose delete position:\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);

    if(choice == 1) {
        x = 0;
    } 
    else if(choice == 2) { 
        x = n / 2;   
    } 
    else if(choice == 3) {
        x = n - 1;
    } 
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    for(i = x; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    
    printf("\nNew Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}