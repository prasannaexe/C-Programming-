// using standard library function strcat to combine the 2nd string and 1st string and save value in 1st string
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100]="Part 1"; // the size of first string should be enough to hold the size of combined output
    char str2[10]="Part 2";
    strcat (str1 , str2); 
    puts (str1); // we cant put \n or \t in puts function
    puts (str2); // we have to use another printf to do so 
    return 0;
}
// the output will be 
// Part 1Part 2   // first string will be updated
// Part 2         // second string will remain same 