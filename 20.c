// program to find if a character entered by user is upper case or not 
#include <stdio.h>
int main (){
    char ch;
    printf ("Enter the character");
    scanf ("%c", &ch);
    //we can use ascii value or just simply write relation of the character like here
    //the ascii value of a is 97 and z is 122 ; A is 65 and Z is 90
    if (ch>='A' && ch<='Z'){
        printf ("It is upper case alphabet");
    } else if (ch>='a'&& ch<='z'){
        printf ("It is lower case alphabet");
    } else{
        printf ("It is not an english alphabet");
    }
    return 0;
    
}