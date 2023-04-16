// write a program to write factorial of n input by the user 
#include <stdio.h>
int factorial (int n);
int main (){
    int n ;
    printf ("Enter the number whose factorial you need :");
    scanf (" %d",&n);
    int a = factorial (n);
    printf ("The factorial of %d is %d ", n , a);
    return 0;

}
int factorial (int n){
    if (n==0){
        return 1; // only base value returns 
    } // first to make a loop we need to find factorial of n-1
    int factorialn1 = factorial (n-1); // factorialn1 is factorial of n - 1;
    int answer  = factorial(n-1) * n; // 
    return answer ;
}