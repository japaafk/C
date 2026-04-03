#include <stdio.h>

int average(int length, int array[]) {
    int sum = 0;
    int result;
    for(int numbers = 0; numbers < length; numbers++)
    {
        sum += array[numbers]; // I'm getting the number located in that position
    }
    result = sum / length;
    return result;
}

int main(void) {
    
    const int N = 3;
    int scores[N];
    for(int i = 0; i < N; i++) {
        printf("Type ur score: ");
        scanf("%i", &scores[i]);
    }
    printf("%i", average(N, scores));
}