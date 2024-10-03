#include <stdio.h>
#include <string.h>  
int main(void){
   char nameOne[40];
   printf("what is your name?: \n");
   scanf("%s", nameOne);
   char decor[20];
   printf("What do you want your name decoration to be?:\n");
   scanf("%s", decor);
   char outcome[40];
   strcpy(outcome, decor);
   strcat(outcome, nameOne);
   strcat(outcome, decor);
   printf("%s", outcome);
   


   

   return 0; 

}
    

    