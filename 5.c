// find sum of two numbers
# include<stdio.h>
int main(){
    int a, b, sum;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    sum = a+b;
    printf("The sum of %d and %d is %d", a, b, sum);
    return 0;
}