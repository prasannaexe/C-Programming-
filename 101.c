// strings cant be changed but pointers can 
#include <stdio.h>
int main(){
    char *canchange = "Hello World";
    puts (canchange);
    canchange = "Hello";
    puts (canchange);
    char cantchange[] = "Hello world";
    puts (cantchange);
    //cantchange = "Hello"; Error will come saying cantchange is not a modifiable value;
    return 0; 

}