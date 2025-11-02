#include <stdio.h>
int main() {
    int scores[] = {85, 92, 78, 65, 90, 73, 88, 60};
    int num_score = sizeof(scores) / sizeof(scores[0]);

    int even_array[num_score]; 
    int odd_array[num_score];  
    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < num_score; i++) {
        if (scores[i] % 2 == 0) {
            even_array[even_count] = scores[i];
            even_count++;
        } else {
             odd_array[odd_count] = scores[i];
            odd_count++;
        }
    }
    printf("Even Scores: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even_array[i]);
    }
    printf("\n");

    printf("Odd Scores: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd_array[i]);
    }
    printf("\n");
    return 0;
}