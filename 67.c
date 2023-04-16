//practice question no 36
#include <stdio.h>
int main(){
    int x ;
    int *ptr; // we created integer x and a pointer 
    ptr = &x; // pointer holds address at x 
    *ptr = 0; // we indirectly assigned value to x 
    printf ("x=%d\n",x);
    printf ("*ptr=%d\n",*ptr);


    *ptr =+ 5; // *ptr =*ptr +5 . so the new value of *ptr and x is 5 
    printf ("x = %d\n",x);
    printf ("*ptr = %d\n",*ptr);


    (*ptr)++; // it means *ptr = *ptr +1 . we need bracket here because we are not increasing address stored in pointer . we are increasing the value of the variable whose address is stored in the pointer 
    printf ("x = %d\n",x);
    printf ("*ptr = %d",*ptr);
    return 0;
    // in fact *ptr is a variable . it means value in the variable stored at pointer
}