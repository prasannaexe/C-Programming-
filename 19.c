// write a program to find out the grade of the student
#include <stdio.h>
int main (){
    int marks ;
    printf ("Enter your marks (0-100)");
    scanf ("%d", &marks );
    if (marks > 80 && marks <= 100 ){
        printf ("You got an A");
    }
    else if (marks > 60 && marks <=80){
        printf ("You got a B");
    }
    else if (marks > 40 && marks <=60){
        printf ("You got a C ");
    }
    else if (marks >20 && marks <=40 ){
        printf ("You got a D ");

    }
    else if (marks >=0 && marks <=20){
        printf ("You got a NG" );
    }
    else {
        printf ("Please enter a valid marks");
    }
    return 0;
}