#include <stdio.h> 
float income, rent, utilities, groceries, transportation, savings, expences, spend;

void percent(char type[], int amount){
  int per = amount/income *100; 
 
  printf("your %s is %d%% of your income.\n", type,  per); 
}


int main(void) {
printf("This is a budget calculator.\n how much do you make a month?\n");
scanf("%f", &income);
printf("how much dos your rent cost?\n");
scanf("%f", &rent);
printf("how much does your utilities cost?\n");
scanf("%f", &utilities);
printf("how much does your groceries cost?\n");
scanf("%f", &groceries);
printf("how much does your transportation cost?\n");
scanf("%f", &transportation);
printf("you make %.2f\n", income); 
savings = income * .2; 
expences = rent + utilities + groceries + transportation;
spend = income - expences - savings;
printf("you make $ %.2f\n" , income);
printf("your expences are $%.2f\n" , income);
printf("your savings are  $%.2f\n" , expences);
printf("your spending money is $%f", spend);
   
percent("rent", rent);
percent("utiltities ", utilities);
percent("groceries", groceries);
percent("transporation", transportation); 
percent("expences", expences);
percent("savings", savings); 
percent("spending", spend);
   return 0;
} 