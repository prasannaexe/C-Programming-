// program to print all the numbers from 1  upto nth term using while loop
#include <stdio.h>
int main (){
    int n;
    printf ("Enter the number upto which the numbers are to be printed ");
    scanf ("%d", &n);
    int a=1;
    while (a<=n){
        printf ("%d \n",a);
        a++;
    }
    return 0;

}