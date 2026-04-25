// COPYING STRINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    char string1[50];
    char string2[50];
    char string3[50];

    printf("Type string: ");
    fgets(string1, 50, stdin);

    // first way
    for(int i = 0, n = strlen(string1); i <= n; i++)
    {
        string2[i] = string1[i];
    }

    printf("Original string: %s\n", string1);
    printf("Copied string(by loop): %s\n", string2);

    // second way
    // the destination comes first then the source string
    strcpy(string3, string1); 
    printf("Copied string(by strcpy): %s\n", string3);
}