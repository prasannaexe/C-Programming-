// using structure as argument in a function which prints the information of a student 
#include <stdio.h>
#include <string.h>

// first we need to define the structure then only we can use it as a argument in a function 
struct student {
    int roll ; 
    char name[100];
    float gpa ;
};

// now we can write the function definition 
void printInfo ( struct student s1);

int main(){
    struct student s1 = { 25 , "Prasanna", 3.60};
    printInfo (s1); // structures work on call by value 
    // so no matter how value change inside function it wont effect anything inside main function
}

void printInfo ( struct student s1) {
    printf ("Student Info\n ");
    printf ("%s\n",s1.name );
    printf ("%d\n",s1.roll);
    printf ("%f\n",s1.gpa);

}