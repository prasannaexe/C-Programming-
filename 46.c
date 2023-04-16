// program to write namaste if user is indian and bonjour if user is french 
#include <stdio.h>
void french ();
void indian ();
int main(){
    char  i ,f ;
    printf ("Are you an indian? reply (y/n)");
    scanf (" %c", &i );// its good to write (" %c") rather than ("%c") the space is good 
    if (i=='y'){
        indian ();
    }
    else if (i=='n'){
        printf ("Are you a french?");
        scanf (" %c",&f);
        if (f=='y'){
            french();
        }
        else {
            printf ("ERROR");
        }
    }
    else {
        printf ("ERROR");
    }
    

}
void french (){
    printf("Bonjour");
}
void indian (){
    printf ("Namaste ");
}
