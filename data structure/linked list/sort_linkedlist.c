// IMPLEMENTS A SORTED LINKED LIST OF NUMBERS
// NB: THE INPUTS MUST BE IN ASCENDING ORDER, OTHERWISE THE CODE WONT'T GIVE THEM SORTED 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void unload(node *list);

int main(void) {

    // memory for numbers
    node *list = NULL;

    // build list
    for(int i = 0; i < 3; i++) {
        
        // allocate node for number
        node *n = malloc(sizeof(node)); 
        if(n == NULL) {
            unload(list); // freeing the memory
            return 1;
        }

        printf("Number: ");
        scanf("%i", &n->number);
        n->next = NULL; 

        // if list is empty
        if(list == NULL) {
            list = n;
        }

        // if number belongs at beginning of list
        else if(n->number < list->number) {
            n->number = list;
            list = n;
        }

        // if number belongs later in list
        else {

            // iterate over nodes in list
            for(node *pointer = list; pointer != NULL; pointer = pointer->next) {

                // if at the end of the list
                if(pointer->next == NULL) {

                    // append node
                    pointer->next = n;
                    break;
                }

                // if in middle of list
                if(n->number < pointer->next->number) {
                    n->next = pointer->next;
                    pointer->next = n;
                    break;
                }
            }
        }
    }

    // print numbers
    for(node *pointer = list; pointer != NULL; pointer = pointer->next) {
        printf("%i\n", pointer->number);
    }

    // free memory
    unload(list);
    return 0;
}

// deleting a linked list
void unload(node *list) {
    node *pointer = list;
    while(pointer != NULL) {

        // making sure there is a pointer point to the next ele
        node *next = pointer->next;
        free(pointer);
        pointer = next;
    }
}