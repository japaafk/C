#include <stdio.h>

int main(void) {

    int n;
    do {
        printf("What is n? ");
        scanf("%i", &n);
    }
    while (n < 0); // the while condition here will be checked at last instead of the beginning

    for(int i = 0; i < n; i++) {
        printf("hello\n");

    }
}