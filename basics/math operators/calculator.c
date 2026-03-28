#include <stdio.h>

int main(void)
{
    int n1 = 10;
    int n2 = 2;

    printf("the sum of %i and %i is %i\n", n1, n2, n1+n2);
    printf("the subtraction of %i and %i is %i\n", n1, n2, n1-n2);
    printf("the multiplication of %i and %i is %i\n", n1, n2, n1*n2);
    printf("the division of %i by %i is %i\n", n1, n2, n1/n2);
    printf("the remainder of their division is %i", n1 % n2);

    return 0;
}