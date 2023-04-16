// write a program to store the data of three students 
#include <stdio.h>
#include <string.h>
struct student {
    char name[100];// its compulsary to write memory value inside []
    int roll;
    float gpa;
};
int main(){

    // for student 1
    struct student s1;
    s1.roll = 7;
    s1.gpa = 3.65;
    strcpy (s1.name , "Unknown");

    // for student 2
    struct student s2;
    s2.roll = 1;
    s2.gpa = 3.90;
    strcpy (s2.name , "Aaryan");

    // for student 3
    struct student s3;
    s3.roll = 38;
    s3.gpa = 3.95;
    strcpy (s3.name , "Uday");

    //now we print the details of all the students 
    printf ("Student 1 \n Name = %s \t",s1.name);
    printf ("Roll No = %d\t",s1.roll);
    printf ("GPA = %f\n",s1.gpa);
    printf ("Student 2 \n Name = %s \t",s2.name);
    printf ("Roll No = %d\t",s2.roll);
    printf ("GPA = %f\n",s2.gpa);
    printf ("Student 3 \n Name = %s \t",s3.name);
    printf ("Roll No = %d\t",s3.roll);
    printf ("GPA = %f",s3.gpa);
    return 0;
}
