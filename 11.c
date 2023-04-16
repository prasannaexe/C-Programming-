//program to find out the average of 3 numbers
#include<stdio.h>
int main (){
    int a, b, c, sum;
    printf ("Enter the first number");
    scanf ("%d", &a);
    printf ("Enter the second number");
    scanf ("%d", &b);
    printf ("Enter the third number");
    scanf ("%d", &c);
    sum =(a+b+c)/3;
    printf ("The average of three numbers is :%d", sum);
    return 0;



}