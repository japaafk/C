#include <stdio.h>

int fact(int n){ 
    // BASE CASE
    if(n == 1) 
        return 1;
    // RECURSION CASE
    else 
        return n*fact(n-1);
}

int main(void) {
    int number;
    printf("Type a number: ");
    scanf("%i", &number);

    printf("Factorial of %i is: %i\n", number, fact(number));
}