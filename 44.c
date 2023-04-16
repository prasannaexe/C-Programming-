// use of functions 
#include<stdio.h>
void printHello();//function prototype / declaration , usually done before int main function
int main(){
    printHello();
    printHello();
    printHello();
    printHello();// here we call the function multiple times and it makes our work easy 
    printHello();
    printHello();

    return 0;//function call at the time of use , used inside main function 
}
void printHello(){
    printf("Hello World ");//function define used after the int function
}
