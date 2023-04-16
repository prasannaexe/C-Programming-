// program to use the recursive function to find out the sum upto n natural numbers 
// we ususally go descending order until we reach 0 
#include <stdio.h>
int printsum ( int n );
int main(){
    int n ;
    printf ("Enter the number upto which you need sum");
    scanf ("%d",&n);
    int a = printsum (n);
    printf ("The sum upto %d natural numbers is %d", n , a);
    return 0;
    
}
int printsum ( int n ){
    if (n == 1){
        return 1 ;
    }
    int sumn1 = printsum (n-1); // here sumn1 is sum upto n-1 terms 
    int sumn = sumn1 + n; 
    return sumn ;

}

