// trying out the difference in pointers storing characters
#include <stdio.h>
// we cant differentiate and compare between pointers storing different data types
int main(){
    char name1 = 'P';
    char name2 = 'p';
    char * ptr1 = &name1;
    char * ptr2 = &name2;
    printf ("%u\n",ptr1);
    printf ("%u\n",ptr2);
    printf ("%u\n",ptr1-ptr2);
    return 0;
}
/*since characters have size of 1 bytes . the result of difference will be same as their 
memory address lol*/