// this is the first complete program using the input from user using scanf and then showing output
// it helps to find out the area of the circle 
#include <stdio.h>
int main(){
    int r;
    float pi=3.14;
    printf ("Enter the radius of circle ");
    scanf ("%d",&r);
    printf ("The area of circle having radius %d is %f ",r, r*r*pi);
    return 0;

}