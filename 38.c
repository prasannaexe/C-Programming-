//write a program to print the factorial of a number 
#include <stdio.h>
int main(){
    int n ,f=1; // we should always allot value to integer before using like f here
    printf ("Enter the number whose factorial you need :");
    scanf ("%d",&n);
    for (int i=1 ; i<=n ; i++){
        f = f*i;
    }
    printf("%d != %d",n,f);
    return 0;
}