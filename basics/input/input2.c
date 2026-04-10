#include <stdio.h>

int main(void) {

    char name3[50] = "Yago Ryan";
    char name2[50];
    char name1[50];

    printf("What's the name of the first participant?  \n");
    fgets(name2, 50, stdin); // stdin reads the inputs from your keyboard
    printf("And what is the name of the second participant? ");
    scanf("%s", name1); // scanf can also read strings, but it stops reading at whitespace.

    printf("%s vs %s vs %s\n", name1, name2, name3);

}