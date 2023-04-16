// combination 1: declare :(int arr[], int n ) ; call :( arr ,  n )
#include <stdio.h>
void printNum (int arr[], int n );
int main(){
    int arr[] = {1,  2, 3, 4, 5, 6}; // we can directly use array as array is a pointer
    printNum ( arr , 6 );
    return 0;
}
void printNum (int arr[], int n ){
    for (int i=0 ; i<n ; i++ ) {
        printf ("%d\t",arr[i]);
    }
}