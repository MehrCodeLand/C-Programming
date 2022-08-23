/*
	GitHub --> MehrCodeLand
		YouTube --> MehrCodeLand
			Linkedin --> Mehrshad Asadi
*/


#include <stdio.h>
// Functions In {C}

// function declaration 
int Sum(int Number1 , int Number2 );

void main(){

    int Result = Sum(25,60);
    printf("Sum Is : %d\n" , Result);
    // or 
    printf("Sum is : %d" , Sum(25,60));
}

int Sum(int Num1 , int Num2 ){
    return Num1 + Num2 ;
}