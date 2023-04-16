// example of function call by value 
#include <stdio.h>
void square (int a);
int main(){
    int a ;
    printf ("Enter the value whose square you need:");
    scanf (" %d",&a);
    square (a); // when we are doing this only a copy of value of a is sent to the function not the original value 
    printf("The number is %d",a); // so even though the value of a has been changed in the function the value in this remains same 
    return 0; // so the answer must be . the number is whatever value we input

}
void square (int a){
    a = a*a ;  // we can modify the value of a parameter inside a function
    printf ("The square is %d",a);
} // whatever square function does to the parameters it doesnt effects the arguments of main function
