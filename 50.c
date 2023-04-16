// use library function to find out the square of a number given by the user 
// power function inputs and outputs in double memory type which is similar to float so we use float 
#include<stdio.h>
#include<math.h>
int main(){
    float n , a;
    printf ("Enter the number : ");
    scanf ("%f" ,&n);
    a = pow(n, 2); // even we create an integer input function it works because compiler can convert from
    printf ("The square of %f is %f", n, a); // smaller to larger data type implicitly but not vice versa
    return 0;
}

