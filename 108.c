// find the salted form of a password entered by user if the salt is "123" and added at the end 
#include <stdio.h>
#include <string.h>
void salting ( char password []);
int main(){
    char password[100]; // declaration of string 
    printf ("Enter your password ( no space )");
    scanf ("%s", password); 
    salting ( password ); // no need of [] in function call  
    return 0;
    
} 
void salting ( char password []){
    char salt[] = "123"; // new string is formed to concatenate (need to write [] in string declaration )
    char salted[200]; // it must have enough space to hold combined form so 200 is size 
    strcpy ( salted , password); // library function to copy 
    strcat ( salted , salt); // library function to catenate
    printf ("The salted form of your password is :"); 
    puts (salted); // output 
}
/*salt is 123 , password is nepal . we copy password  to salted so salted becomes nepal 
finally after combinaton the final form is nepal + 123 i.e. nepal123*/