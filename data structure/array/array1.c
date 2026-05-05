#include <stdio.h>

int main(void) {
    
    const int N = 3;
    int scores[N];
    for(int i = 0; i < N; i++) {
        printf("Type ur score: ");
        scanf("%i", &scores[i]);
    }
    for(int j = 0; j < N; j++) {
        printf ("%i: %i\n", j, scores[j]);
    }
}