// print pointers 
#include <stdio.h>
int main(){
    int age = 23;
    int *ptr = &age; // answer comes in strange hexadecimal values
    printf ("%p \n",&age); // address  of age integer . same as the value inside pointer 
    printf ("%p \n",ptr);// what value is inside ptr pointer 
    printf ("%p \n",&ptr);// address of pointer ptr 
}// we can also use %u instead of %d as %u is unsigned int