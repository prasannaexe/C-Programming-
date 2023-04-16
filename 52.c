// using recursions to print hello world 5 times 
#include<stdio.h>
void printHW (int count);
#include <stdio.h>
int main(){
    printHW (5);// function call time is tracked by parameters . function will be called 5 times 
    return 0;
}
void printHW (int count ){
    if (count == 0){
        return;
    }
    printf("Hello World \n");
    printHW (count-1);
}
// no need to write return in void 