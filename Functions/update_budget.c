#include <stdio.h>
float income, rent, utilities, grocieries, car, savings, expenses, spend;

void percent(char type[], float amount){
  float per = amount/income *100;

  printf("Your %s is %f of your income. \n", type, per);
}

float inputs(char type[],float var){
  printf("monthly %s:\n", type);
  scanf("%f", &var);
  return var;

}

int main(void){ 
    
 printf("This is a budget calculator.\n");
 income = inputs("income", income);
 rent = inputs("rent", rent);
 utilities = inputs("utilities", utilities);
 grocieries = inputs("grocieries", grocieries);
 car = inputs("transportation", car);

 savings = income *.2;
 expenses = rent + utilities + grocieries + car;
 spend = income - savings - expenses ; 
 printf("you make %.2f\n",income);
 printf("Your expenses are %.2f \n", expenses);
 printf ("Your savings are %.2f \n", savings);
 printf("Your spending money is %.2f \n", spend);
   
 percent("rent ", rent);
 percent("utilities",utilities);
 percent("grocieries", grocieries);
 percent("transportation", car);
 percent("savings", savings);
 percent("expences", expenses);
 percent("spend money", spend);
    
return 0; 

}