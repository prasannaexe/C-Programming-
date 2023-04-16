// we can use character and float as iterator in initialisation syntax
#include<stdio.h>
int main (){
    for (float i= 1.0 ; i <=5.0 ; i++) {
        printf ("%f \n",i);
    }
    for (char j = 'z'; j >= 'a' ; --j ) {
        printf ("%c \n",j);
    }
    for (char k='z'; k>='a'; k-- ){
        printf ("%c\n",k);
    }
    for (char l='*'; l > '$'; l--){
        printf ("%c\n",l);
    }
    return 0;

}
/* SOME ASCII VALUES
! (exclamation mark) - 33
" (double quotes) - 34
# (hash) - 35
$ (dollar sign) - 36
% (percent sign) - 37
& (ampersand) - 38
' (single quote) - 39
( (left parenthesis) - 40
) (right parenthesis) - 41
* (asterisk) - 42
+ (plus sign) - 43
, (comma) - 44
- (hyphen or minus sign) - 45
. (period or full stop) - 46
/ (forward slash) - 47
: (colon) - 58
; (semi-colon) - 59
< (less than sign) - 60
= (equal sign) - 61
> (greater than sign) - 62
? (question mark) - 63
@ (at sign) - 64
[ (left square bracket) - 91
\ (backslash) - 92
] (right square bracket) - 93
^ (caret) - 94
_ (underscore) - 95
(grave
Copy code
{ (left curly brace) - 123
| (vertical bar or pipe) - 124
} (right curly brace) - 125
~ (tilde) - 126*/
