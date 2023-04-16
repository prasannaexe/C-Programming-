// program to print the smallest number among the three numbers
#include <stdio.h>
int main(){
    int a, b, c;
    printf ("Enter the first number");
    scanf ("%d",&a);
    printf ("Enter the second number");
    scanf ("%d",&b);
    printf ("Enter the third number");
    scanf ("%d",&c);
    if (a<b){
        if (a<c){
            printf ("The smallest number is %d ",a);
        }
        else if (c<a){
            printf ("The smallest number is %d ",c);
        }
    }
    else if (b<a){
        if (b<c){
            printf ("The smallest number is %d ",b);
        }
        else if (b>c){
            printf ("The smallest number is %d",c);
        }
    }

    return 0;
}