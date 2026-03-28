#include <stdio.h>

int main() {

    int n1;
    int n2;

    n1 = 5;
    n2 = 4;

    if (n1 > n2)
    {
        printf("%i is greater than %i", n1, n2);
    }
    else if (n1 < n2)
    {
        printf("%i is less than %i", n1, n2);
    }
    else 
    {
        printf("They are equal"); 
    }

    return 0;
}