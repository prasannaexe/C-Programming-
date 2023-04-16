// program to write a function which prints the table of any number 
// we use printf as an output function 
#include<stdio.h>
void table (int n);
int main(){
    int n ;// this n is only known inside main function .
    printf ("Enter the number ");
    scanf (" %d",&n);
    table (n);//argument /actual parameter 
    return 0;

}
void table (int x ){// parameter / formal parameter , they can be different as their matching is by position
    for (int i = 1; i<=10 ; i++){
    int product = i * x;
    printf ("%d x %d =%d\n", x , i , product );
    }
}