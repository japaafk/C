#include <stdio.h>

int main(void) {

    int n1 = 6;
    int n2 = 7;
    char answer;

    if (n1 == 6 && n2 ==7) { // && it means AND
        printf("67\n");
    }



    printf("Do you like it? \n");
    scanf("%c", &answer);

    if(answer == 'y' || answer == 'Y') { // || it means OR
        printf("Thank you");
    }
    else if (answer != 'y' && answer != 'Y') { // ! it means NOT
        printf("Okay, bye");
    }
    // !variable - inverts the value of its operand
    return 0;
}