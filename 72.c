// swap 2 numbers (interchange) a and b
#include <stdio.h>
void swap (int *i , int *j);
int main(){
    int a , b ;
    printf ("Enter the value of a ");
    scanf ("%d", &a );
    printf ("Enter the value of b ");
    scanf ("%d", &b);
    swap( &a , &b);
    printf ("The swapped values are a=%d and b=%d",a , b); // we can return 2 values using pointers 
    return 0;
}
void swap (int *i , int *j){
    int k = *i;
    (*i) = (*j) ;
    (*j) = k ;
// initially we wrote printf here  
}