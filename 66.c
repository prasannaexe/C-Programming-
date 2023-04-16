// to print value of address stored in pointer 
#include <stdio.h>
int main(){
    int age = 23;
    int *ptr = &age;
    printf ("%d\n",age);
    printf ("%d\n",*ptr);
    printf ("%d\n",*(&age));
// these are the 3 ways to print the value of address stored in pointer

}