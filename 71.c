//comparing call by value and call by reference
#include<stdio.h>
void square (int number);
void _square (int *number);
int main(){
    int number;
    printf ("Enter the number ");
    scanf ("%d",&number);
    square (number);
    printf ("number=%d\n",number );
    _square (&number);// we are using the address of number as an argument
    printf ("number=%d\n",number);
    return 0;
}
void square (int number){
    number = number * number ;
    printf ("square = %d\n", number);
}
void _square (int *number){
    (*number)=(*number)*(*number);
    printf ("square = %d\n",*number);
}
// we get answer 64 8 64 64 when we enter 8 as input