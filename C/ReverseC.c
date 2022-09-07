#include <stdio.h>

// 123 --> 321 
int GetInt();
void PrintInt(int);

int main()
{
    int Number = GetInt();
    int Reverse  = 0 ;
    int r ;

    while( Number != 0 )
    {
        r = Number % 10 ;
        Number /= 10 ;
        Reverse = Reverse  * 10 + r ;
    }

    PrintInt(Reverse);
}


int GetInt()
{
    int Number ; 
    printf("Enter Number : ");
    scanf("%d", &Number);

    return Number;
}

void PrintInt(int Number)
{
    printf("\nReverse : %d" , Number);
}