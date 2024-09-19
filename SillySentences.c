#include <stdio.h> 
int main(void) {
   char animal[20];
   char place[20];
   char verb[20];  
   printf("Name an animal: ");
   fgets(animal, sizeof(animal), stdin); 
   printf("Name a place: ");
    fgets(place, sizeof(place), stdin); 
   printf("Name a verb: ");
    fgets(verb, sizeof(verb), stdin); 
   printf("The %s walked to the %s and %s with his friend the angry turtle.\n", animal, place, verb);
    return 0;
} 