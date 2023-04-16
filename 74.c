// finding the sum product and average using same function with the help of pointers (the better way)
#include <stdio.h>
    void work (int a , int b , int*sum , int*product , int*average);
int main(){
    int a , b , sum , product , average ;
    printf ("Enter the first number ");
    scanf ("%d",&a);
    printf ("Enter the second number");
    scanf ("%d",&b);
    work (a , b , &sum , &product , &average );
    printf ("sum = %d \n product = %d \n average = %d", sum , product ,average);

}
void work (int a , int b , int*sum , int*product , int*average ){
    *sum = a+b;
    *product = a*b;
    *average = (a+b)/2;
}