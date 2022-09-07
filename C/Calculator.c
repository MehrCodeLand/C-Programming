#include <stdio.h>

void Sum();
void Div();
void Mul();
void Min();

int main()
{
    int Command ;
    while( 3 > 2 )
    {
        printf("1)Sum 2)Min 3)Div 4)Mul 0)Exit\n");
        printf("Enter Your Command : ");
        scanf("%d" , &Command);

        if(Command == 0 )
        {
            break;
        }

        switch(Command)
        {
            case 1:
                Sum();
                break;
            case 2:
                Min();
                break;
            case 3:
                Div();
                break;
            case 4:
                Mul();
                break;
            default:
                printf("Invalid Command");
                break;
        }
    }    
}


void Sum()
{
    int a , b ;
    printf("Enter A : ");
    scanf("%d" , &a);
    printf("Enter B : ");
    scanf("%d" , &b);

    printf("\nSum --> %d\n" , a + b );
}

void Min()
{
    int a , b ;
    printf("Enter A : ");
    scanf("%d" , &a);
    printf("Enter B : ");
    scanf("%d" , &b);

    printf("\nMin --> %d\n" , a - b );
}

void Div()
{
    int a , b ;
    printf("Enter A : ");
    scanf("%d" , &a);
    printf("Enter B : ");
    scanf("%d" , &b);

    printf("\nDiv --> %f\n" , (float)a/b );
}

void Mul()
{
    int a , b ;
    printf("Enter A : ");
    scanf("%d" , &a);
    printf("Enter B : ");
    scanf("%d" , &b);

    printf("\nMul --> %d\n" , a * b );
}






