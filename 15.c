//switch conditional statement
#include <stdio.h>
int main (){
    int day ;//sun=1 mon=2 tue=3 wed=4 thu=5 fri=6 sat=7
    printf ("Enter the day (1-7) ");
    scanf ("%d", &day);
    switch (day){
        case 1 : printf("Its Sunday");
               break;
        case 2 : printf("Its Monday");
               break; 
        case 3 : printf("Its Tueday");
               break;  
        case 4 : printf("Its Wednesday");
               break;
        case 5 : printf("Its Thursday");
               break;
        case 6 : printf("Its Friday");
               break;
        case 7 : printf("Its Saturday");
               break;

        default : printf("Error");
    
    }

}