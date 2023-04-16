// using standard library function strlen which gives the length of string 
#include <stdio.h>
#include <string.h> // we need to include string library before using 
int main(){
    char name[100];
    printf ("Enter your name :");
    fgets(name , 100 , stdin); 
    int length = strlen(name); //we used standard library function strlen which returns unsigned long
    printf ("The length of your name is %d",length);
    return 0;
    // unfortunately i got the string length 1 more than actual . program outputs string prasanna as 9 words
}
