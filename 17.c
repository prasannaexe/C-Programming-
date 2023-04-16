/*nested if case to check if a number is positive or negative and even or odd 
we can use nest in case of both if else statememnts and switch statements*/
#include <stdio.h>
int main (){
    int num ;
    printf ("Enter the number ");
    scanf ("%d", &num);
    if (num >=0){
        printf ("The number is positive \n ");
        if (num % 2 == 1){
            printf ("The number is odd \n");
        }
        else {
            printf ("The number is even \n");
        }
    }
    else {
        printf ("The number is negative \n");
    }
    return 0;


    
}