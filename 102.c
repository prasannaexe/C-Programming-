// make a program that inputs users name and then prints its length 
#include <stdio.h>
int namelength ( char arr []); // remember: we need to pass array with square brackets there 
int main(){
    char name[40];
    printf ("Enter your name");
    fgets (name , 40 , stdin); 
    printf ("The length of your name is %d letters ",namelength( name));// we dont need to pass square brackets
    return 0;
}
int namelength ( char arr []){ 
    int count = 0;
    for (int i = 0 ; arr [i] != '\0'; i++){ // for loop to traverse array untill null character
        count = count + 1 ;
    }
    return count-1; // its because we need to subtract null character which the loop counts as elelment of array

}