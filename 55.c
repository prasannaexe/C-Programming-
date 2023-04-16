// function to convert celcius into farenheit 
#include <stdio.h>
float convert(int n);
int main(){
    int n ;
    printf ("Enter the temperature in celcius :");
    scanf (" %d",&n);
    float a =convert (n);
    printf ("The temperature in farenheit is : %f ", a);
    return 0;
}
float convert(int n){
    float a = 32 + (n * (9.0/5.0));// if we used 9/5 answer would be 1 not 1.8 as both 9 and 5 are integers
    return a;
}