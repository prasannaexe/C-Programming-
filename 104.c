// using standard library function strcpy to copy the value in old string to new string 
#include <stdio.h>
#include <string.h> // as usual library needs to be declared first 
int main(){
    char newstr[]="This is new";
    char oldstr[]="This is old";
    strcpy (newstr , oldstr) ;
    printf ("Now new is "); // new value is changed as old is copied into new 
    puts (newstr);
    printf ("\n");
    printf ("Now old is "); // old value remains same
    puts (oldstr);
    return 0 ;
}