#include <stdio.h> 
#include <string.h>
int i; 
int usr;
char one[50];
char two[50];
char three[49];
int main() {
    printf("Give me a number");
    scanf("%d", &usr); 
    printf("Give me a short word!\n");
    scanf("%s", one); 
    printf("Give me another short word!\n");
    scanf("%s", two); 
    strcat(three, one);
    strcat(three, two); 
    //loop that counts to 50
  for(i=0;i<=usr;i++){
        
        //replace #'s divisable by 3 and 5 with "fizzbuzz"
    if(i%3==0 && i%5==0){
        printf("%s\n", three);

        //replace #'s divisable by 3 with "Fizz"
    }else if (i%3==0){ 
        printf("%s\n", one); 
    }else if(i%5==0){
        
        //replace #'s divisable by 5 with "buzz"
        printf("Buzz\n");
    }else { 
        
        //print the # 
    printf("%d\n", i); 
    } 
   } return 0;
} 