#include <stdio.h>
// Static Value In {C}

void main(){

    int b = 10 ;

    // pointer
    int * a = &b;

    // pointer to pointer
    int ** a2 = &a ;
    printf("Value : %d " , **a2 );
}