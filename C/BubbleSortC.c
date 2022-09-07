#include <stdio.h>

int main()
{
    int Numbers[7] = {1,-12,23,100,-22,16,20};
    int i , j ;

    for(i = 0 ; i < 7 ; i++)
    {
        for( j = i + 1 ; j < 7 ; j++)
        {
            if(Numbers[i] > Numbers[j])
            {
                int Temp = Numbers[j];
                Numbers[j] = Numbers[i];
                Numbers[i] = Temp;
            }
        }
    }

    for( i = 0 ; i < 7 ; ++i)
    {
        printf("%d ", Numbers[i]);
    }

}