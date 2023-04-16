// program to receive input from user until its multiple of 7
#include <stdio.h>
int main(){
    int n;
    do {
        printf ("Enter number which is not multiple of 7");
        scanf ("%d",&n);
        printf ("%d\n",n);
        if (n%7 == 0){
            break;
        }
        
    }while (1);
    printf ("You entered multiple of 7");
    return 0;
}