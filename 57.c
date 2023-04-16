// write a function to print n terms of the fibonacci sequence 
#include <stdio.h>
int fibonacci (int n);
int main(){
    int n;
    printf ("Enter the number of terms you need :");
    scanf (" %d",&n);
    fibonacci (n);
}
int fibonacci(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    int ans = fibonacci (n-1) + fibonacci (n-2) ; // this new system is invented by me
    printf (" %d",ans);
    return ans;

}
// the answer is repeated because we called the fuction two times 