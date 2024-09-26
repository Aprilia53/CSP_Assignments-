#include <stdio.h> 
int main(void) {
    float income, rent, utilities, groceries, transportation, savings, expences, spend;
    float prent, putilites, pgroceries, ptransportation, psavings, pexpences; 
  printf("This is a budget calculator.\n how much do you make a month?\n");
  scanf("%f", &income);
  printf("how much dos your rent cost?\n");
  scanf("%f", &rent);
  printf("how much does your utilities cost?\n");
  scanf("%f", &utilities);
  printf("how much does your groceries cost?\n");
  scanf("%f", &groceries);
  printf("how much does your transportation cost?\n");
  scanf("%f", &transportaion);
 printf("you make %.2f\n", income); 
  savings = income * .2; 
 expences = rent + utilities + groceries + transportation;
  spend = income - expences - savings;
  printf("you make $ %.2f\n" , income);
 printf("your expences are $%.2f\n" , income);
  printf("your savings are  $%.2f\n" , expences);
   printf("your spending money is $%f", spend);
   prent = rent/income *100;
   putilities = utilities/income *100; 
   pgroceries = groceries/income *100;
   ptransporation = transporation/income *100;
   psavings = savings/income *100; 
   pexpences = expences/income *100;
   printf("your rent is %d%% of your income.\n", (int) prent);
    printf("your utilities is %d%% of your income.\n", (int) putilities);
    printf("your groceries is %d%% of your income.\n", (int) pgroceries);
    printf("your transportation is %d%% of your income.\n", (int) ptransportation);
    printf("your savings are %d%% of your income.\n", (int) psavings);
    printf("your expences are %d%% of your income.\n", (int) pexpences);
   return 0;
} 