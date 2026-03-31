#include <stdio.h>

int main(void) {

    int x;
    int anything = 3;

    x = (anything == 3) ? 5 : 6;
    printf("%i", x);
    
    /*This is the exactly same thing
    if(anything = 3)
    {
        x = 5;
        printf("%i", x)
    }
    else
    {
        x = 6;
        printf("%i", x)
    } */
}