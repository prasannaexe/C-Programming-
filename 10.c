/*program to find out if a number is two digit number*/
#include <stdio.h>
int main (){
    int a;
    printf  ("Enter the number ");
    scanf ("%d", &a);
    printf ("%d", (a>9)&&(a<100));
    return 0;
}