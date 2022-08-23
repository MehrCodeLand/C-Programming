#include <stdio.h>

// Loops In {C}
void main(){

    // For Loop
    int A[5] = {1,23,45,6,7};
    int Sum = 0 ;
    for(int i = 0 ; i < 5 ; ++i ){
        Sum += A[i];
    }

    // While Loop
    int Sum2 = 0 ;
    int counter = 0 ;
    while(counter < 5){
        Sum2 += A[counter];
        ++counter;
    }

    printf("Sum Is : %d\n" , Sum);
    printf("Sum Is : %d" , Sum);
}