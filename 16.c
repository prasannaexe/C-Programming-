//switch conditional statement character version
#include <stdio.h>
int main (){
    char day ;//sun=s mon=m tue=t wed=w thu=T fri=f sat=S
    printf ("Enter the day ");
    scanf ("%c", &day);
    switch (day){
        case 's' : printf("Its Sunday");
               break;
        case 'm' : printf("Its Monday");
               break; 
        case 't' : printf("Its Tueday");
               break;  
        case 'w' : printf("Its Wednesday");
               break;
        case 'T' : printf("Its Thursday");
               break;
        case 'f' : printf("Its Friday");
               break;
        case 'S' : printf("Its Saturday");
               break;

        default : printf("Error");
    
    }

}