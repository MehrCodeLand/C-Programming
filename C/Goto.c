#include <stdio.h>
// goto

int main(){

    int i = 0 ;
    int Sum = 0 ;
    double Avg = 0 ;
    const int Max = 5 ;

    for(i ; i < Max ; i++){
        int Number ; 
        printf("Enter Your Number : ");
        scanf("%d",&Number);

        if(Number < 0 ){
            goto Average ;
        }
        Sum += Number ;
    }

    Average:
        Avg = Sum / i ;
        printf("Sum : %d\n" , Sum ) ;
        printf("Average : %f \n" ,Avg ) ;

}