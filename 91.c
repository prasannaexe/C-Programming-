//write a function to reverse  an array
#include<stdio.h>
void reverse (int arr [],int n); // function to reverse the array 
void print (int arr [],int n); // function to print all the elements 
int main(){
    int arr []={1,2,3,4,5,6,7,8,9}; // initialization of an array
    reverse ( arr , 9); // function calls 
    print (arr , 9); // no . of elements of an array is compulsary in all functions 
    return 0;

}
void reverse (int arr [],int n){ 
    int temp ; 
// we need a temp variable to store value while we exchange ; same as an extra bucket required
    for (int i = 0 ; i<=(n/2); i++){
// we use <= sign because otherwise 9/2 = 4 . small then 4 is 3 . only the first and last 3 elements will be exchanged 
        int temp = arr [n-i-1];
// temp stores the values of numbers from last (the value in index 0 is stored in 9-1 = 8)
        arr [n-i-1] = arr [i]; 
// the index whose value was stored in temp . we immediately change its value  
        arr [i] = temp ;
// the one whose value was stored in arr[n-i-1] ; we allot its value into temp so that change in value in temp in next round wont effect at all 
    }
}
void print (int arr [],int n){ 
    printf ("The arrays are :");  
    for (int i = 0 ; i<n ; i++){ // we use traverse an array with print each time 
        printf ("%d \t",arr[i]);
    }
} 
// since arrays are pointers arr[] is always a pointer . Hence call by refernce is being done 
// whenever we are using arrays as arguments of functions . any changes to them will also be 
// reflected in the main function as the original value is sent as argument not a copy