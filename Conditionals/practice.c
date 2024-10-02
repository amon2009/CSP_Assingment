#include <stdio.h>

float  grade;

int main(void) { 
    printf("What is percent d oyou have in the class?\n");
    scanf("%f", &grade);
    if (grade >= 90){
        printf("Your grade is an A \n");
    }else if (grade >= 80){
        printf("Your grade is a B \n");
    }else if (grade >= 70){
        printf("Your grade is a C \n");
    } else if (grade >= 60){
        printf("Your grade is a D \n");
    }else{
        printf("Your grade is a F \n");
    }
    return 0; 
}