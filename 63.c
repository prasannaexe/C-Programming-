// using pointers 
#include <stdio.h>
int main(){
    int age = 23 ;// we can give any name to a pointer just need to put astrick before the variable 
    int *pt = &age ;
    int _age = *pt ;// we use this syntax when we need to know the value inside pointer 
    printf ("%d",_age); // we store the value in new integer _age
    return 0;
}