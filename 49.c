// program to find out the price after adding vat 
// its an example that changes to parameters in function dont change the value in calling function
#include<stdio.h>
void vatprice (float n);
int main(){
    float n ;
    printf ("Enter the original price ");
    scanf (" %f",&n);
    vatprice (n);               // rather than the actual values being sent 
    printf ("The final price is %f \n",n); // a copy of argument is passed to the function 
    return 0; // the values in calling function are not changed 
}
void vatprice (float n){
    n = n+n*0.13;
    printf ("final price is %f\n",n); // no matter whats the change in the parameter .i.e the final price 
}