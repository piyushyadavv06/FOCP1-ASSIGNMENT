#include <stdio.h>
int main() {
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
       
        if ((i == 0 || a[i] >= a[i - 1]) && 
            (i == n - 1 || a[i] >= a[i + 1])) {
            printf(" peak element is %d\n", a[i]);
           
        }
   }
    return 0;
}