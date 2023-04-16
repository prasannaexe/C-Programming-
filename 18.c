//Program to find out if a student has passed or failed the examination 
// pass when marks > 30 and fail when marks <=30
#include<stdio.h>
int main (){
    int marks;
    printf ("Enter your marks ");
    scanf ("%d", &marks );
    if (marks > 30 && marks <101){
        printf ("Congratulations !! You have passed ");
    }
    else if (marks <=30 && marks >=0){
        printf ("Sorry to say you have failed . Please work hard next time");
    }
    else {
        printf ("Please enter valid marks ");
    }

    return 0;
}