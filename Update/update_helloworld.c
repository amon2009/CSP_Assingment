#include <stdio.h>
void hello(char name[]){
printf("Hello %s", name);
}

int main(void) { 
    hello("Maria \n");
    hello("John \n");
    hello("Steve \n");
    hello("Amon \n");
    hello("Dean \n");
    
    return 0; 
}