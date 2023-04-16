// write a program to calculate the area of a circle, square and rectangle
// here we create three functions square , circle and recctangle  
#include <stdio.h>
int square (int l);
float circle (float r);
int rectangle (int L ,int B);
int main(){
    char a ;
    printf ("You need area of?? \n type s for square \n type c for circle \n type r for rectangle");
    scanf (" %c",&a);
    switch (a){
        case 's' : printf ("Enter the length :");
        int l ;
        scanf (" %d",&l);
        int i = square (l);
        printf ("The area of square is %d",i);
        break;
        case 'c' : printf ("Enter the radius :");
        float r ;
        scanf (" %f",&r);
        float j= circle (r);
        printf ("The area of circle is %f",j);
        break;
        case 'r' : printf ("Enter the length");
        int L , B;
        scanf (" %d",&L);
        printf ("Enter the breadth");
        scanf (" %d",&B);
        int k = rectangle ( L, B);
        printf ("The area of rectangle is %d",k);
    }

    
}
int square (int l){
    return l*l;
}
float circle (float r){
    return 3.14*r*r;
}
int rectangle (int a , int b){
    return a*b;
}

