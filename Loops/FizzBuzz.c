#include <stdio.h> 
int i;
int usr;
int main() {
    printf("Give me a number");
    scanf("%d", &usr); 
    //loop that counts to 50
  for(i=0;i<=usr;i++){
        //replace #'s divisable by 3 and 5 with "fizzbuzz"
    if(i%3==0 && i&5==0){
        printf("FizzBuzz\n ");
    }else if (i%3==0){ 
        //replace #'s divisable by 3 with "Fizz"
       printf("Fizz\n");
    }else if(i%5==0){
        //replace #'s divisable by 5 with "buzz"
        printf("Buzz\n");
    }else { 
        //print the # 
    printf("%d\n", i); 
    } 
   } return 0;
} 