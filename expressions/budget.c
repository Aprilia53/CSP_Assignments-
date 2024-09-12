#include <stdio.h> 
int main() {
    
   char income [7];
   char utilities[9];
   char groceries[9];
   char car[9];
   printf("This is a budget calculator. \n how much do you make a month?\n");
  scanf("%s", income);
  printf("how much do your utilities cost?\n");
  scanf("%s", utilities);
   printf("you make %s\n", income); 
   float spend[]= (float) income - (float) utilities;
   printf("%s", spend) 
   return 0;
}