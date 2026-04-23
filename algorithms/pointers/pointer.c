// POINTERS ARE USEFUL CAUSE THEY STORE THE ADRESS OF A VALUE IN MEMORY
#include <stdio.h>

int main(void) {

    int n = 50;
    int *p = &n;
    printf("%p\n", p); // showing the adress of the variable n
    
    return 0;
}