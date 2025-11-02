#include <stdio.h>
int main() {
    int arr[100];
    int n, i, j, count = 0;
    int prime;
   
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int num = arr[i];
        prime = 1;  

        if (num <= 1) {
            prime = 0;
        } else {
            for (j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    prime = 0;  
                    break;
                }
            }}
        if (prime == 1) {
            count++;
        }
    }
    printf("There are %d prime numbers in the array.\n", count);
    return 0;
}