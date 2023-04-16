// trying out other things in pointer to pointer 
#include<stdio.h>
int main(){
    int a = 5;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("%p\n",&*pptr);
    printf ("%p\n",&ptr);//we got same value as above
    printf ("%p\n",&pptr);
    printf ("%d\n",*pptr); // remember this 
    printf ("%d\n",*ptr);
    printf ("%u",&a); // this is same as remember this
    return 0;

}