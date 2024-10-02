#include <stdio.h>


int main(){
       printf("What percent do you have in the class?\n");
 scanf("%d", &grade);
    if (grade >= 90){
        printf("Your grade is an A\n");
    }else if (grade >= 88){
        printf("your grade is a B\n");
    }else if (grade >= 70){
        printf("your grade is a C\n");
    }else if (grade >= 60){
        printf("your grade is a D\n");
    }else{
        printf("Your grade is an F\n");
    }
    return 0; 
}