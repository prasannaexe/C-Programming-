// program to print the sum of first n natural numbers and also print them in opposite order
#include<stdio.h>
int main (){
    int n , sum ;
    sum =0;
    printf ("Write number upto which sum is to be calculated");
    scanf ("%d", &n);
    for (int i = 0; i<=n; i++){
        sum = sum +i;

    }
    printf("The sum upto %d is %d\n",n, sum);
    int j = n;
    while (j>=1){
        printf ("%d\n",j);
        j--;
        // we can also use the same variable i here istead of j
    }
    return 0;
}