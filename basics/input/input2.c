#include <stdio.h>

int main(void) {

    char name1[50] = "Yago Ryan";
    char name2[50];

    printf("What's your name? \n");
    fgets(name2, 50, stdin); // stdin reads the inputs from your keyboard

    printf("%s vs %s\n", name1, name2);

}