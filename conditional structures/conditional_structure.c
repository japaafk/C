#include <stdio.h>

int main() {

    int number1;
    int number2;

    number1 = 5;
    number2 = 4;

    if (number1 > number2)
    {
        printf("%i is greater than %i", number1, number2);
    }
    else if (number1 < number2)
    {
        printf("%i is less than %i", number1, number2);
    }
    else 
    {
        printf("They are equal"); 
    }

    return 0;
}