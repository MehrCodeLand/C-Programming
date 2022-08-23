#include <stdio.h>
// Static Value In {C}


int StaticValue();
int NormalValue();

void main(){

    for(int i = 0 ; i < 5 ; ++i ){
        printf("Normal Value : %d\n" , NormalValue());
    }

    for(int i = 0 ; i < 5 ; ++i ){
        printf("Static Value : %d\n" , StaticValue());
    }
}

int NormalValue(){
    int Value1 = 24 ;
    ++Value1;
    return Value1;
}

// Here!
int StaticValue(){
    static int Value2 = 99 ;
    ++Value2;
    return Value2;
}