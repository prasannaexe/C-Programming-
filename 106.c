// using standard library function strcmp to compare strings storing butterfly and butter
#include <stdio.h>
#include <string.h>
int main(){
    char str1[]="Autter";
    char str2[]="BUTTER";
    printf ("%d",strcmp (str1 , str2));// since the function gives output in the form of integer
    return 0;
}
// the answer is 1 which is positive number and it means ASCII of string 1 (butterfly ) is greater than 
// ASCII of string 2 (butter)