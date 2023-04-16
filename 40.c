// calculate the sum of all numbers from 5 to 50
#include <stdio.h>
int main(){
    int sum=0;
    for (int i=5; i<=50 ; i++){
        sum=sum+i;
    }
    printf ("The sum of all the numbers from 5 to 50 is %d",sum);
    return 0;

}