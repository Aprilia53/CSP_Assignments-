#include <stdio.h> 
int main(){
    char name[] = "your name decorated is ";
    char prefix[] = " <<<Aprilia>>>";
    strcat(name, prefix);
    printf("%s\n", name); 

    return 0; 
}