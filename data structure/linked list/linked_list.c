#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void) {

    node *list = NULL; // creating list as an empty variable

    for(int i = 0; i < 3; i++) {
        
        node *n = malloc(sizeof(node)); // creating one new node
        if(n == NULL)
            return 1;
        
        printf("Number: ");

        // the operator "->" it's a combination of the terms "*" and "." used by struct. Ex: (*n).number
        // n -> number - this command means: go to 'n' and access its 'number' field
        scanf("%i", &n->number); // storing value in it
        n->next = NULL; // pointing my list at the new node

        // Prepend node to list - insert at the beginning
        n->next = list;
        list = n; // update list pointer to the new node (insert at beginning)
    }

    // print numbers
    node *pointer = list;
    while(pointer != NULL) {
        printf("%i\n", pointer->number);
        pointer = pointer->next;
    }
    return 0;
}