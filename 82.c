// Difference and Comparision between 2 pointers 
#include <stdio.h>
int main (){
    int a = 24;
    int b = 20;
    int * ptr1 = &a;
    int * ptr2 = &b;
    printf ("Address stored by first pointer =%u\n",ptr1);
    printf ("Address sotred by second pointer =%u\n",ptr2);
    // now the difference between 2 pointers
    printf ("difference = %u\n",ptr1-ptr2);
    // as pointers are storing different address 
    printf ("When they are storing different address the result is %u\n",ptr1==ptr2);
    // now lets make them store same value 
    ptr2 =&a;
    printf ("When they are storing same address the result is %u\n",ptr1==ptr2);
    return 0;
}