// print the value of variable i from its pointer to pointer 
#include<stdio.h>
int main(){
    int i = 5;
    int*ptr = &a;
    int**pptr = &ptr;
    printf ("the value of i is %d",**pptr);
    return 0;


}