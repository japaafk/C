// malloc(MEMORY ALLOCATION): ITS A FUNCTION THAT ALLOCATES MEMORY
// if you use malloc() you also must use free() to avoid memory leak
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *s = NULL;
    size_t size = 0;

    printf("s: ");
    getline(&s, &size, stdin);

    char *t = malloc(strlen(s) + 1); // maloc will return the adress of a chunck of memory
    // strlen(s) + 1 is necessary cause the function also needs to alocate the NUL character

    strcpy(t, s);
    if(strlen(s) > 0) { // in case that the user doesn't type anything at all
        t[0] = toupper(t[0]); // capitalize the first character of the string t
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t); // freeing the memory alocated by malloc
}