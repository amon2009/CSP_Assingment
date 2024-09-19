#include <stdio.h>


int main(void) { 
    char animal[20];
    char place[20];
    char verb[20];
    printf("Name an animal: ");
    scanf("%s", animal);
    printf("Name a Place: ");
    scanf("%s", place);
    printf("Name a tense verb: ");
    scanf("%s", verb);
    printf (" The %s walked to the %s and  %s with his friend angry turtle.\n", animal, place, verb);
    
    return 0; 
}