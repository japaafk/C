#include <stdio.h>

int main() {

    for(int height = 0; height< 3; height++) {
        for(int row = 0; row < 3; row++) {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    // for each row
    for(int i = 0; i < 5; i++){
        //for each column
        for(int j = 0; j < i+1; j++) {
            printf("#");
        }
        printf("\n");
    }
}