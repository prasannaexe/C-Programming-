// making a pointer for structure 
#include <stdio.h>
#include <string.h>
struct student {
    int marks ; 
    float gpa;
    char name[100];
};
int main(){
    struct student s1 = { 75 , 3.25 , "Prasanna"};
    
    // now making a pointer for structure
    struct student *ptr = &s1;  // also we could have declared it in one line and the assigned value in next
    // struct student *ptr;
    //ptr = &s1;
    // Now the output of the pointer 
    printf ("The marks is %d",(*ptr).marks); // here if we write *ptr only it gives whole value so we wrote (*ptr).marks
    return 0;                 // ^ be careful while writing ()with pointer 
}