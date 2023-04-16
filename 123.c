// use typedef keyword to create alias for data types 
#include <stdio.h>
#include <string.h>
// we make coe alias 
typedef struct computerengineeringstudent {
    int rollno;
    char name[100];
    float gpa;
}coe;
int main(){
   coe s1 ; 
   s1.gpa = 3.80;
   strcpy(s1.name , "Prasanna");
   s1.rollno = 20;

   printf ("Student name is %s",s1.name);
   printf ("Student rollno is %d",s1.rollno);
   printf ("Student gpa is %f",3.60);
   return 0;
}