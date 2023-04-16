// program that shows the difference between while loop and do while loop
#include<stdio.h>
int main(){
    int i=5;
    while (i<5){
        printf ("%d",i);
        i++;
    }
    int j=10;
    do {
        printf ("%d",i);
        i++;
    } while (j<10);
    return 0;
}
//we can see while loop cant print output when condition is false but do while loop can
