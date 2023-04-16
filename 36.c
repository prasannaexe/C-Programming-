//use of continue. print all the numbers from  1 to 10 except 5
#include <stdio.h>
int main() {
    for (int i=1 ; i<=10; i++){
        if (i==5){
            continue;
        }
        printf ("%d",i);
    }
    return 0;
    
   
}
