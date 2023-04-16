// making an array which stores marks of 3 subjects of 2 students 
#include <stdio.h>
int main(){  // in memory its stored as _ _ _ | _ _ _ like this 
    // int arr [2][3] = {{90 , 78 , 85},{63 , 55 , 60}} this is direct method 
    // now alloting each location by marks one by one
    int arr [2][3];
    arr [0][0] = 90;
    arr [0][1] = 78;
    arr [0][2] = 85;

    arr [1][0] = 63;
    arr [1][1] = 55;
    arr [1][2] = 60;

    printf ("%d\t", arr [0][0]);//90
    printf ("%d\t", arr [0][1]);//78
    printf ("%d\n", arr [0][2]);//85
    printf ("%d\t", arr [1][0]);//63
    printf ("%d\t", arr [1][1]);//55
    printf ("%d\t", arr [1][2]);//60
    return 0;

}