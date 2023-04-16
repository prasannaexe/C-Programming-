// traverse an array without pointer(input/output values in 5 locations of an array)

#include <stdio.h>
int main(){
    int symbolno[5];
    // input
    for (int i=0 ; i<5 ; i++){
        printf ("input value in index %d :",(i+1));
        scanf ("%d", &symbolno[i]);
    }
    // output
    for (int i=0 ; i<5 ; i++){
        printf ("The value in index %d is %d \n",(i+1),symbolno[i]);
    }
    return 0;
    }
    
