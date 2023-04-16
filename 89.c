// write a function to count the number of odd numbers in an array 
#include <stdio.h>
int countodd (int arr[] , int n);
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
     // function size is needed at the time of input 
    printf ("The no. of odd numbers is %d", countodd (arr,32));
} 
int countodd (int arr[] , int n){
    int count = 0;
    for (int i = 0 ; i<n ; i++){
        if ( arr[i]  % 2 != 0) {
            count = count + 1;
        }
    }
    return count ;

}