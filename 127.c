//Make a structure to store Bank account information of a customer of ABC Bank. Also make an alias for it
#include <stdio.h>
#include <string.h>
typedef struct BankAccount{
    int accountno;
    char name[100];
}acc;
int main(){
    acc acc1={123, "prasanna"};
    acc acc2={124, "pekka"};

    printf ("acc no =%d/n",acc1.accountno);
    printf ("Name = %s/n", acc1.name);

    return 0;
}