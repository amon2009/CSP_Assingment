#include <stdio.h>

int main(void) { 
    float income, rent, utilities, grocieries, car, savings, expenses, spend;
    float prent, putilities, pgroceries, pcar, psaving, pexpenses; 
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
    savings = income;
    expenses = rent + utilities + grocieries + car;
    spend = income - expenses - savings; 
    printf("you make %.2f\n",income);
    printf("Your expenses are %.2f \n", expenses);
    printf ("Your savings are %.2f \n", savings);
    printf("Your spending money is %.2f \n", spend);
    prent = utilities/income * 100; 
    pgroceries = grocieries/ income * 100; 
    psaving = savings/ income * 100; 
    pexpenses = expenses/ income * 100; 
    printf("Your rent is %d%% of your income. \n", (int) prent);
    printf("Your utilities is %d%% of your income. \n", (int) putilities);

    return 0; 

}