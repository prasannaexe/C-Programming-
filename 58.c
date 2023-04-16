// write a  program to find the nth term of a fibonacci sequence 
#include<stdio.h>
int fibonacci (int n);
int main(){
    int n;
    printf ("Enter the nth value:");
    scanf (" %d",&n);
    printf ("%d", fibonacci (n));
    return 0;
}
int fibonacci (int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonacci (n-1)+fibonacci (n-2);
}