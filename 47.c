// making an input output function which gives sum 
#include <stdio.h>
int sum (int a, int b);

int main() {
    int a , b;
    printf ("Enter the first number :");
    scanf (" %d",&a);
    printf ("Enter the second number :");
    scanf (" %d",&b);
    int s = sum (a,b);
    printf ("The sum is %d", s);
    return 0;


}
int sum(int a, int b){
    return a+b; // we could have used x and y or anything others 
}               // no error because parameters match arguments based on position 
                // first with first and last with last