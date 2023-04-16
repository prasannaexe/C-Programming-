// Use of %s format specifier to print and scan the string 
#include <stdio.h>
int main(){
    char name [12]; // making a string of characters 
    printf ("What is your name:");
    scanf ("%s",name);
    printf ("Your name is %s",name);
    return 0;
} // when we used this program we found out that it only prints one whole chain uninterrupted by space 
// when we enter PRASANNA PAUDEL we only get PRASANNA in output as PAUDEL is interrupted by space
// infact the word interrupted by space is not even input in the program . see copy for further info
