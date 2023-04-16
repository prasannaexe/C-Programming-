//print the reverse table of a number 
#include<stdio.h>
int main(){
    int n , table =1 ;
    printf ("Enter the number :");
    scanf ("%d",&n);
    for (int i =10; i>=1 ; i--){
        table = n*i;
        printf ("%d\n",table);
    }
    return 0;
}