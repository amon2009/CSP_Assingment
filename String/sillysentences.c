#include <stdio.h>

int main(void) { 
    char animal, place, verb;
    printf("Name an animal: \n");
    fgets(animal, size(animal), stdin); 
    printf("Name a Place");
    fgets(place, size(place), stdin);
    printf("Name a verb");
    fgets(verb, size(verb), stdin);
    printf("The %s walked to the %s and did %s with his friend angry turtle.\n", animal, place, verb); 

    return 0; 
}