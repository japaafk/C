#include <stdio.h>

int main(void) {

    int n1;
    int n2;

    printf("Type a number: ");
    scanf("%i", &n1); // it is used a PLACEHOLDER to declare the type data

    printf("Type another number: ");
    scanf("%i", &n2); // its passed the adress of the variables to scanf through &n1 and &n2

    printf("%i + %i = %i", n1, n2, n1+n2);

    return 0;

}