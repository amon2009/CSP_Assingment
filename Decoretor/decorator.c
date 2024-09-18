#include <stdio.h>

int main() { 
    char name[50]; 
    printf("Enter Name:");
    scanf("%49s", name);
    printf("<<< %s >>>\n", name);

    return 0; 
}