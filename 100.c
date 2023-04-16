// use of fgets and puts to input and output strings 
#include <stdio.h>
int main(){
    char name [50]; // initializing the character
    fgets (name,50,stdin); // name , size and always use stdin;
    puts (name); 
    return 0;
}