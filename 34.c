// use of break statement 
// keep taking input from user until user enters odd number 
#include<stdio.h>
int main(){
    int n;
    do{ 
      printf ("Enter the number :");
      scanf ("%d",&n); // never put space after %d like ("%d ",n).I had problems with it 
      printf ("%d\n",n);
        if (n %2  ==1){
         break;
        }


    } while(1);
    printf ("You entered an odd number ");
    return 0;
}