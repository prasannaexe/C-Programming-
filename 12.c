//check if you are adult or not 
#include <stdio.h>
int main (){
    int age;
    printf ("Enter your age");
    scanf ("%d", &age);
    if (age >= 18){
        printf("You are an adult \n");
    }
    else{
        printf("You are not an adult");
    }
    printf ("Thank you");
    return 0;
}