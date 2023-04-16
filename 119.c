// initializing the variables inside structures all at once 
// this is the same program from 116.c
#include <stdio.h>
#include <string.h>
struct student { 
    int roll;
    float gpa;
    char name[100]; 
};
int main(){
    // during initialization we do it this way 
    struct student s1 = {25 , 3.95 , "Prasanna"};
    
    // the method of printing is same 
    printf ("Students name is %s\n",s1.name);
    printf ("Students roll no is %d\n",s1.roll); 
    printf ("Students gpa is %f\n",s1.gpa);
    return 0;
}