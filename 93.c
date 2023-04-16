// create a 2D array storing the table of 2 and 3
#include<stdio.h>
void table (int arr[2][10], int number , int n);// in 2d arrays we need to make sure the [] have values inside 
int main(){
    int arr[2][10]; // the first one is always row and second one is column
    table ( arr, 2 , 0);
    table ( arr, 3 , 1);
    
    for (int i = 0 ; i<10 ; i++){
        printf ("%d\t",arr[0][i]);
    }
    printf ("\n");
    for (int i = 0 ; i<10 ; i++){
        printf ("%d\t",arr[1][i]);
    }
    return 0;


}
void table (int arr[2][10], int number , int n){ // here we got the array with size as parameter and now we traverse it filling the values 
    for (int i = 0 ; i<10 ; i++){ // for loop to traverse 
        arr [n][i] = number * (i+1); 
    }
}
