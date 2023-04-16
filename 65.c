// using unsigned integer "%u" to print value of memory location in decimal form
#include <stdio.h>
int main(){
    int age = 23;
    int *ptr = &age;
    printf ("%u\n",&age);
    printf ("%u\n",ptr);
    printf ("%u\n",&ptr);
}// we can get some warning messages 