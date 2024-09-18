#include <stdio.h> 
int main() {
    char name=[30];
    printf("Welcome to name decorator! What is your name?\n");
    scanf("%s", name);
    printf("Your name decorated is, <<<"  + name +  ">>>");