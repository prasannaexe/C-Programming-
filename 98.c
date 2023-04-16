// create a string firstName and lastName to store details of user and print all the characters using a loop
#include <stdio.h>
void printstring( char arr[]); // argument and parameter can be different 
int main(){
    char firstname []="PRASANNA "; 
    char lastname []="PAUDEL";
    printstring (firstname);
    printstring (lastname);
    return 0;
}
void printstring( char arr[]){ // both firstname and lastname come in as arr turn by turn 
    for (int i=0 ; arr[i]!='\0'; i++){ // loop will continue until it reaches end point (ie null character)
        printf ("%c",arr[i]); 
    }
}
