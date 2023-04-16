// doing the same as before one but this time inside single for loop 
#include <stdio.h>
int main(){
int n , sum ;
    sum =0;
    printf ("Write number upto which sum is to be calculated");
    scanf ("%d", &n);
    for (int i=1 , j=n; i<=n , j>=1; i++ , j--){
        sum+=i;
        printf ("%d\n",j);
        //we can also completely remove i and only use j 
        // becausse 1+2+3 and 3+2+1 is same so sum comes same at last

    }
    printf("The sum upto %d is %d\n",n, sum);
    return 0;
}