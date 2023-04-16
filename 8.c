#include <stdio.h>
/*program to find out if a number is divisible by 2 or not */
int main (){
    int a , b;
    printf ("Enter the number");
    scanf ("%d", &a);
    b=a%2;
    printf("%d", b==0);
    return 0;

}