// use of arrow operator instead of dot operator(->) with pointers 
// we use arrow operator for simplicity
#include <stdio.h>
#include <string.h>
struct student {
    int marks ; 
    float gpa;
    char name[100];
};
int main(){
    struct student s1 = { 75 , 3.25 , "Prasanna"};
    
    struct student *ptr = &s1; 

    printf ("The name is %s",ptr->name);
    printf ("The gpa is %f",ptr->gpa);
    printf ("The marks is %d",ptr->marks);  // we used arrow operator instead of dot (*ptr).marks
    return 0;                // pointer is storing the value of the variable where arrow is pointing
}                            // arrow is pointing towards marks so pointer stores value of marks