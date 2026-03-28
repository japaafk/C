#include <stdio.h>

void hello(void)
{
    printf("hello\n");
}

int main(void) 
{
    for(int i = 0; i < 3; i++)
        hello();
    
}