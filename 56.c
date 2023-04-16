// write a function to calculate percentage of a student from marks in science, maths and english 
#include<stdio.h>
int marks (int a , int b , int c);
int main(){
    int a , b, c;
    printf ("Enter marks in science :");
    scanf ("%d",&a);
    printf ("Enter marks in maths :");
    scanf ("%d",&b);
    printf ("Enter marks in english :");
    scanf ("%d",&c);
    int print = marks ( a, b, c);
    printf ("Your percentage is %d%",print );
   
}
int marks (int a , int b , int c){
int print = (a + b + c)/3;
return print ;
}
