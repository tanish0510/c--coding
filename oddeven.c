#include<stdio.h>
int main()
{
    int a;
    int resultodd=0;
    int resulteven=0;
    int i;
    printf("enter the number");
    scanf("%d", &a);
    for(int i=1; i<=a; i++)
    {
            if(i%2 == 0)
            {
                resulteven=resulteven+i;
            }
            else
            {
                resultodd=resultodd+i;
            }
    }
    printf("the resulteven is,%d" , resulteven);
    printf("the resultodd is, %d" , resultodd);
}