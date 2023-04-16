// making an array instead of vairables inside structures 
#include <stdio.h>
#include <string.h>
// structure declaration same as for a variable (no change)
struct student {
    int roll;
    float gpa;
    char name[100];
};
int main(){
    // assigning value to them is a bit different . replace variable name like s1 with the arrays IT[0]
    struct student IT[100];
    IT[0].roll = 75;
    IT[0].gpa = 3.25;
    strcpy (IT[0].name ,"Prasanna");

    // while printing also we need to replace value of variables by arrays 
    printf ("%s",IT[0].name);
    printf ("%d",IT[0].roll);
    printf ("%f",IT[0].gpa);
    return 0;
}