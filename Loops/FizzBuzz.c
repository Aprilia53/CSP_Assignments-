#include <stdio.h> 
#include <string.h>
int i; 
int usr;
char one;
char two;
int main() {
    printf("Give me a number");
    scanf("%d", &usr); 
    printf("Give me a short word!\n");
    scanf("%s", &one); 
    printf("Give me another short word!\n");
    scanf("%s", &two); 
    //loop that counts to 50
  for(i=0;i<=usr;i++){
        
        //replace #'s divisable by 3 and 5 with "fizzbuzz"
    if(i%3==0 && i%5==0){
        strcat(one,two);
        printf("%s\n", one);

    }else if (i%3==0){ 
        
        //replace #'s divisable by 3 with "Fizz"
       printf("%s\n", two);
    }else if(i%5==0){
        
        //replace #'s divisable by 5 with "buzz"
        printf("Buzz\n");
    }else { 
        
        //print the # 
    printf("%d\n", i); 
    } 
   } return 0;
} 