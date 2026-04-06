#include <stdio.h>

int main(void) {
    int number = 5;
    int guess = 0;


    while (guess != number)
    {
        printf("Whats your guess: ");
        scanf("%i", &guess);
        if (guess != number)
        {
            printf("Wrong number\n");
        }
        else
        {
            printf("Correct number");
        }
    }
    
}