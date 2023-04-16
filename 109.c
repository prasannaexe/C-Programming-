// write a function named slice which takes a string and returns a sliced string from index n to m
#include <stdio.h>
void slice (char str[] , int n , int m); // function declaration 
int main(){
    char str[]="HelloWorld"; // the string that we pass as argument
    slice (str , 3 , 6); // function call 
}
void slice (char str[] , int n , int m){ // function definition 
    char newstr [100]; // making a new string to store the sliced part 
    int j = 0;  
    for (int i = n ; i<= m ; i++, j++){ // traverse the string from n to m 
        newstr [j] = str [i]; // the i=n of original string will be stroed in 0 of new string 
    }
    newstr [j] = '\0'; // to make sure new string is an array we input null character at last 
    puts (newstr); // output of the function 
}