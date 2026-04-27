// DEMONSTRATES MEMORY ERRORS VIA VALGRIND

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    // dynamic way to get space for 3 integers from malloc
    int *x = malloc(3 * sizeof(int)); // malloc takes as it arguments the number of bytes that you to get
    if(x == NULL) {
        return 1;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    return 0;
}