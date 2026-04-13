// LINEAR SEARCH IS A WAY TO FIND AN ITEM BY GOING THROUGH EACH ELEMENT OF AN ARRAY
#include <stdio.h>
#include <string.h>

int main(void) {
    // string pointer - can't read whitespace
    char *string[] = {"battleship", "boot", "cannon", "iron", "term", "thimble"};

    char s[50];
    printf("String: ");
    scanf("%s", s);
    for(int i = 0; i < 6; i++) {
       // strcmp will return 0 if the strings are equal, otherwise it will return a positive number or negative number  
        if (strcmp(string[i], s) == 0) { 
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}   