// Increament and decrement of pointers 
#include <stdio.h>
int main(){
    int age = 22 ;
    int*ptr = &age;
    printf ("intial int = %u",ptr);
    ptr++;// it means ptr = ptr +1 // it will increase by 4 as int takes 2 byte
    printf ("int after increament = %u",ptr); // printing the address of variable stored by pointer
    char name = '*';
    char*a = &name; 
    printf ("initial char = %u",a);
    a--;// it means a = a - 1;// it will decrease by 1 as char takes 1 byte
    printf ("char ater decreamemt =%u",a); // printing the address of varible stored by pointer 
    return 0;
    // we can do the same with the float value as well and float takes 4 bytes space 
}