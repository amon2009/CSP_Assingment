#include <stdio.h>

float income, rent, utilities, grocieries, car, savings, expenses, spend;

void percent(char type[], int amount[]){
   int per = amount/income *100;

   printf("Your %s is %d%% of your income. \n", type, per);
}

int main(void){ 
    
printf("This is a budget calculator.\n How much do you make a mouth?\n"); 
scanf("%f", &income);
printf (" How much do your rent cost: \n"); 
scanf("%f", &rent);
printf (" How much does your utilities cost: \n"); 
scanf("%f", &utilities);
printf (" How much do your grocieries cost: \n"); 
scanf("%f", &grocieries);
printf (" How much does your transportation cost: \n"); 
scanf("%f", &car);
savings = income *.2;
expenses = rent + utilities + grocieries + car;
spend = income - savings - expenses ; 
printf("you make %.2f\n",income);
printf("Your expenses are %.2f \n", expenses);
printf ("Your savings are %.2f \n", savings);
printf("Your spending money is %.2f \n", spend);
   
percent("rent", rent);
    
return 0; 

}