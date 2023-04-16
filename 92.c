// write a program to store the first n fibonacci numbers 
#include <stdio.h>
int main(){
    int n ;
    printf ("Enter the number of fibonacci numbers you need (n>2) :");
    scanf ("%d",&n);
    int fib[n];
    fib[0]=0; // fibonacci of 0 and 1 is always same 
    fib[1]=1; 
    printf ("0\t1\t"); // we compulsarily print fibonacci of 0 and 1;
    for (int i=2 ; i<n ; i++ ){ // we use only a loop in this case which traverse from 2 to n
        fib [i]= fib [i-1] + fib [i-2]; // since 0 and 1 is fixed we can easily traverse storing new values along the array
        printf ("%d\t",fib[i]);
    }
    return 0;
}