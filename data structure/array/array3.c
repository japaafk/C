#include <stdio.h>
#include <string.h>

int main(void) {
   /* Here you are only storing the address
    char *word[2]; You can't mutate them'
    word[0] = "HI!";
    word[1] = "BYE!";
    */
    
    char word[2][5]; // Flexible way to use strings in an array
    strcpy(word[0], "HI!");
    strcpy(word[1], "BYE!");

    printf("%s\n", word[0]);
    printf("%s\n", word[1]);
}