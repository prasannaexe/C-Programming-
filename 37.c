//print all the odd numbers from 5 to 50
#include <stdio.h>
int main (){
    for (int i=5; i<=50; i++){//we could have done i=i+2 the easy way but lets do it hard way 
    if (i%2 !=1){
        continue;
    }
    printf ("%d\n",i);
    }
    return 0;
}