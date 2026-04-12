#include <stdio.h>

int main() {

    for(int height = 0; height< 3; height++) {
        for(int row = 0; row < 3; row++) {
            printf("#");
        }
        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}