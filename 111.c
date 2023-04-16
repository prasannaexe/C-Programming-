// program to check if a given character is present in a string or not 
#include <stdio.h>
void check (char str[], char ch);
int main(){
    char ch = 'a';
    char str[]="This is useless sentence ";
    check (str,ch);
} 
void check (char str[], char ch){
    for (int i = 0 ; str [i]!= '\0'; i++){
        if (str[i]==ch){
            printf ("Yes it is present");
            return ;
        }
    }
    printf ("No its not present");
}