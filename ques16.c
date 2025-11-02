#include <stdio.h>
int main() {
    int a[100];
    int n, i, x, num, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n\nEnter the element which you want to insert: ");
    scanf("%d", &num);

    printf("where to insert:\n");
    printf("1.front\n");
    printf("2.middle\n");
    printf("3.end\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        x = 0;                 
    else if (choice == 2)
        x = n / 2;             
    else if (choice == 3)
        x = n;                
    else {
        printf("Invalid choice\n");
        return 0;
    }
    for (i = n; i > x; i--) {
        a[i] = a[i - 1];
    }

    a[x] = num;
    n++;  
   
    printf("\nNew Array :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}