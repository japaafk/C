#include <stdio.h>

int main(void) {
    // Here you are only storing the address
    char *word[2]; // You can't mutate them'
    word[0] = "HI!";
    word[1] = "BYE!";

    printf("%s\n", word[0]);
    printf("%s\n", word[1]);
}