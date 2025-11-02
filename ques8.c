#include <stdio.h>
int main() {
    int n, i;
    int n1 = 0, n2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d ", n1);
        next = n1 + n2;  
        n1 = n2;        
        n2 = next;
    }
    printf("\n");
    return 0;
}