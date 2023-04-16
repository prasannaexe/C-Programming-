//Input and Output of arrays
#include<stdio.h>
int main(){
    int marks[3]; // [3] means (0th , 1st and 2nd) 3 variable array is created
    printf ("Enter the marks of first student :");
    scanf ("%d", &marks[0]);
    printf ("Enter the marks of second student :");
    scanf ("%d", &marks[1]);
    printf ("Enter the marks of third student :");
    scanf ("%d", &marks[2]);
    printf ("%d\n", marks[0]);
    printf ("%d\n", marks[1]);
    printf ("%d\n", marks[2]);
    return 0;
}