//program to count vowels present in a string 
#include <stdio.h>
int countvowel (char str []);
int main(){
    char str[]="HelloWorld"; // create a string to work on 
    printf ("There are %d vowels",countvowel (str));
}
int countvowel (char str []){ // function definition 
    int count = 0; // initial count must be 0
    for (int i = 0 ; str[i]!= '\0'; i++){  // for loop to traverse the string 
    if (str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){ //check for all conditions 
        count++; // increase the value of count by 1 if any vowel is present 
    }
}
return count ; // return the final value 
}
/* Now we can even check how many times an alphabet like l has reoccured . we just need to change the 
condition . To find out something like number of consonants in a string we just have to subtract the 
number of vowels from the total number of letters present in the string */