#include <stdio.h>
#include <string.h>

// used to related data
typedef struct
{
    char names[50];
    char numbers[50];
}
phonebook;

int main(void) {
    char name[50];
    phonebook people[3];

    // strcpy copies the string into the array
    strcpy(people[0].names, "Arthur");
    strcpy(people[0].numbers, "(18) 99823-2599S");

    strcpy(people[1].names, "Makino");
    strcpy(people[1].numbers, "(17) 99743-4114");

    strcpy(people[2].names, "Matheus");
    strcpy(people[2].numbers, "(18) 99610-4676");

    printf("Type names: ");
    scanf("%s", name);

    for(int i = 0; i < 3; i++) {
        if(strcmp(people[i].names, name) == 0) {
            printf("Found, %s\n", people[i].numbers);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}