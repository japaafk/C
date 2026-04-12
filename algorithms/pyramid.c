#include <stdio.h>

void draw(int number);

int main(void) {
    int height;
    printf("The height: ");
    scanf("%i", &height);
    draw(height);
}

void draw(int number) {
    
    // BASE CASE
    // the function it will be getting smaller until reachs 0, this process avoids an infinite call of the function
    if(number <= 0) {
        return;
    }

    // RECURSION
    draw(number - 1);

    for(int i = 0; i < number; i++) {
        printf("#");
    }
    printf("\n");
}