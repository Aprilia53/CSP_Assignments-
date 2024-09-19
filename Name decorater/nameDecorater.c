#include <string.h> 
#include <stdio.h> 
int main(){
    char name[] = "your name decorated is";
    char prefix[] = "<<<Aprilia>>>";
    strcat(name, prefix);
    printf("%s\n", name); 

    char name1[] = "your name decorated is";
    char prefix1[] = "(((Aprilia)))";
    strcat(name1, prefix1);
    printf("%s\n", name1); 
    
    char name2[] = "your name decorated is";
    char prefix2[] = "---Aprilia---";
    strcat(name2, prefix2);
    printf("%s\n", name2); 
    
     char name3[] = "your name decorated is";
    char prefix3[] = ":):)Aprilia:):)";
    strcat(name3, prefix3);
    printf("%s\n", name3); 

 char name4[] = "your name decorated is";
    char prefix4[] = "###Aprilia###";
    strcat(name4, prefix4);
    printf("%s\n", name4); 

 char name5[] = "your name decorated is";
    char prefix5[] = "+++Aprilia+++";
    strcat(name5, prefix5);
    printf("%s\n", name5); 

     char name6[] = "your name decorated is";
    char prefix6[] = "~~~Aprilia~~~";
    strcat(name6, prefix6);
    printf("%s\n", name6); 

     char name7[] = "your name decorated is";
    char prefix7[] = "===Aprilia===";
    strcat(name7, prefix7);
    printf("%s\n", name7); 
    return 0; 
}
