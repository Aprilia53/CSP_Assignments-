#include <stdio.h> 
float income, rent, utilities, groceries, transportation, savings, expences, spend;

float input(char type[], float var){
  printf("monthly %s:\n", type);
  scanf("%f", &var);
  return var ;

    
}


void percent(char type[], int amount){
  int per = amount/income *100; 
 
  printf("your %s is %d%% of your income.\n", type,  per); 
}


int main(void) {
printf("This is a budget calculator.\n");
income = input("income", income);
rent = input("rent", rent);
utilities = input("utilities", utilities);
groceries = input("groceries", groceries);
transportation = input("transportation", transportation);

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