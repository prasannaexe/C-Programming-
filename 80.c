// write a program to enter price of three items and print their price with VAT
#include<stdio.h>
int main(){
    float price[3]; // we should write float type variable this time as answer may be in decimal 
    printf ("Enter the price of 1st item :");
    scanf ("%f", &price[0]);  // we can also initailze all values at same time like done below
    printf ("Enter the price of 2nd item :");//float price[]={100.0,200.0,300.0};
    scanf ("%f", &price[1]);
    printf ("Enter the price of 3rd item :");
    scanf ("%f", &price[2]);
    printf ("The price with VAT of 1st item is %f",price[0] + 0.14*price[0]);
    printf ("The price with VAT of 2nd item is %f",price[1] + 0.14*price[1]);
    printf ("The price with VAT of 3rd item is %f",price[2] + 0.14*price[2]);
    return 0;
}
