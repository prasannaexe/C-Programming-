// program to check if you are child , teenager , adult or elderly
# include<stdio.h>
int main(){
    int age;
    printf ("Enter your age");
    scanf ("%d", &age);
    if(age>=18 && age<65){
        printf("You are an adult \n");
    }
    else if (age>12 && age<18){
        printf("You are a teenager \n");
    }
    
    else{
        printf("You are a child \n");
    } 
     if(age>64){
        printf("You are an elderly \n");
    }
    return 0;


}