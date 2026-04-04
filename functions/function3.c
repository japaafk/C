#include <stdio.h>

int valid_triangle(int a, int b, int c) {
    
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Valid triangle");
        return 1;
    }
    else {
        printf("Invalid triangle");
        return 0;
    }
}
int main(void) {
    int side[3];

    for(int i = 0; i < 3; i++){
        printf("What's the lenght of the side: ");
        scanf("%i", &side[i]);
    }

    valid_triangle(side[0], side[1], side[2]);

}