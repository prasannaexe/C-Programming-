// write two functions one to print Hello and next to print Goodbye 
#include <stdio.h>
void printHello();
void printGoodbye();
int main(){
    printHello();//the function which is called first executes first and
    printGoodbye();// the function which is called later executes later
    return 0;
}
void printHello(){// first int function executes then int calls print hello and halts other functions 
    printf ("Hello\n");// print hello is executed then int calls print goodbye and print goodbye executes
}
void printGoodbye(){
    printf ("Goodbye \n");
}
