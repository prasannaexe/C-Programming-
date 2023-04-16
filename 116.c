// program using structures
#include <stdio.h>
#include <string.h> // we define this library because we may need strcpy function of this library to store any character strings
// first we need to define structures 
struct student { 
    int roll;
    float gpa;
    char name[]; // arrays definition is also similar only we need to write []
};
int main(){ 
    // then we have to initialize the structres 
    struct student s1;
    s1.roll = 25;
    s1.gpa = 3.95;
    strcpy (s1.name , "Prasanna");  // we do this in case of arrys since value of arrays cant be copied using = operator 
    // now we can print the structure like a normal integer 
    printf ("Students name is %s\n",s1.name);
    printf ("Students roll no is %d\n",s1.roll); // we print the structures in similar ways to any normal integer
    printf ("Students gpa is %f\n",s1.gpa);
    return 0;
}