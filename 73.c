// practice question no 40 
/*write a single function to calculate the sum, product and average of 2 numbers 
and print them inside the int main function */
#include<stdio.h>
void mixed (int*i , int*j , int*k);
int main(){
    int a = 5;
    int b = 6;
    int c = 7;
    mixed (&a , &b , &c);
    printf ("sum=%d    product=%d    average=%d",a,b,c);
    return 0;

}
void mixed (int*i , int*j , int*k){
    int sum = (*i)+(*j)+(*k);
    int product = (*i)*(*j)*(*k);
    int average = ((*i)+(*j)+(*k))/3;
    (*i) = sum ;
    (*j) = product ;
    (*k) = average ; 
}
