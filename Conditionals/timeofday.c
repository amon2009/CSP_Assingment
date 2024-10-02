#include <stdio.h>
int time = 15;
int main(void) { 
    if ( time == 7 || 8 || 9 || 10 || 11){
        printf("Good Morning \n");
    } else if (time == 12 || 13 || 14 || 15 || 16 || 17){
        printf("Good Afternoon \n");
    };
    return 0;
}