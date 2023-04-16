// // combination 2: declare :( int *arr , int n ) ; call :( &arr[0] ,  n )
#include <stdio.h>
void printNum ( int *arr , int n ); // we declared pointer inside function declare
int main(){
    int arr[]={1, 2, 3, 4, 5, 6};
    printNum ( &arr[0], 6);
    return 0 ;
}
void printNum (int *arr , int n){
    for (int i = 0 ; i< n ; i++){
        printf ("%d\t",arr[i]);
    }
}
// we can use all the  combinations 