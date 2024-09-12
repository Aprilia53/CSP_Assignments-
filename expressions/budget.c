#include <stdio.h> 
int main() {
    
   float income [7];
   printf("This is a budget calculator. \n how much do you make a month?\n");
   fgets(income, sizeof(income), stdio); 
   printf("you make %f ", income); 
   return 0;
}