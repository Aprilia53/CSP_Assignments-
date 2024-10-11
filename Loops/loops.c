#include <stdio.h> 
char sibs[8][20] = {"carrera","Rossi","Mom","dad"};
int i; 
int main() {
   for(i=0;i<=3;i++){
     printf("%s\n", sibs[i]);
   }
    return 0;
}  