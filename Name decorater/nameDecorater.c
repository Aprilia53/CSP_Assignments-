#include <stdio.h> 
int main(){
    char name[] = "your name decorated is ";
    char prefix[] = " <<< ";
    char prefix2[] = " Aprilia";
    char prefix3[] = " >>>";
    strcat(name, prefix);
    strcat(prefix2, prefix3); 
    printf("%s\n", name);

    return 0; 
}