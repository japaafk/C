#include <stdio.h>

int main(void) {

    int n;
    do {
        printf("What is n? ");
        scanf("%i", &n);
    }
    while (n < 0);

    for(int i = 0; i < n; i++) {
        printf("hello\n");

    }
}