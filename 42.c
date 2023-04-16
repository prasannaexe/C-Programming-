//program to check if a number is prime or composite 
#include <stdio.h>
int main(){
    int n;
    printf ("Enter the number :");
    scanf (" %d",&n);
    if (n==2, n==3, n==5, n==7 ){
        printf ("Prime number ");
    }
    if (n==1){
        printf ("Neither prime nor composite ");
    }
    if (n<0 ||n >100){
        printf ("Pleasse enter a number between 0 and 100");
    }
    else {
    int divide ;
    int i=2;
    while (i<=10){
        divide = n%i;
        i++;
    }
    if (divide ==0){
        printf ("Composite number ");
    }
    else {
        printf ("Prime number ");
    }
    }
    return 0;



}