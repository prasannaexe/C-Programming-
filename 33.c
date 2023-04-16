//program to write table of a number input by the user 
#include<stdio.h>
int main (){
    int n ;
    printf ("You want table of which number ??");
    scanf ("%d",&n);
    int i, product  ;
    i =1 ;
    while (i<= 10) {
        product = n * i ;
        printf ("%d x %d = %d \n", n, i, product );
        ++i;
    }
    return 0;
}