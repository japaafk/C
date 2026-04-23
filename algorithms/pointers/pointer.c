// POINTERS ARE USEFUL CAUSE THEY STORE THE ADRESS OF A VALUE IN MEMORY
#include <stdio.h>

int main(void) {

    int N = 50;
    int *P = &N;
    printf("The adress of the variable: %p\n", P); // showing the adress of the variable N
    // DEREFERENCE OPERATOR
    printf("The value of the variable: %i\n", *P); // by using * you're saying to go to the adress in P
    
    return 0;
}