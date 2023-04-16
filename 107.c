// Take a string input from the user using %c by the help of function 
#include <stdio.h>
int main(){
    char str[100]; // the string can only store upto 100 characters 
    char ch;
    int i =0; // we use while loop here because iterator can be decalred outside 
    while (ch != '\n'){ // this condition means user inputs the value untill enter key (new line )is enterd 
        scanf ("%c",&ch); 
        str[i]=ch; // the input values are stored in str [i]
        i++; 
    }
    str[i]='\0'; // we can do this by while loop only . its needed to say that its string so we need to input null character by ourself
    puts (str); 
    return 0;
}