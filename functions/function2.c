#include <stdio.h>

// Prototype - tells to the compiler that it will exist this function
void hello(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
        hello();
}

void hello(void)
{
    printf("hello\n");
}