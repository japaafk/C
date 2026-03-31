#include <stdio.h>

int main(void) {

    int number;
    printf("Type a number from 1 to 3: ");
    scanf("%i", &number);

    switch(number)
    {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default: // This conditio will be executed if none of the cases above happen
            printf("Sorry\n");
    }
}