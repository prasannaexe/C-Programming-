// traverse an array with the help of  pointer(input/output values in 5 locations of an array)
#include <stdio.h>
int main (){
    int symbolno[5];
    int*ptr = symbolno; // *ptr = &symbolno[0] ; this is also correct way to point an array
    // input
    for (int i = 0 ; i<5 ; i++ ){
        printf ("Enter the value in index %d :",(i+1));
        scanf ("%d", (ptr+i));
    }
    // output
    for (int i =0 ; i<5 ; i++){
        printf ("The value in index %d is %d \n",(i+1),(*(ptr+i)));
    }
    return 0;
}