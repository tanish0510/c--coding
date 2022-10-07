#include<stdio.h>
int main()
{
    int integer;
    int i;
    printf("enter the integer");
    scanf("%d" , &integer);
    for(i=1; i<=integer; i++)
    {
        if(integer%i==0)
        {
            printf("all divisors are:\n");
        printf("\t%d", i);
        }
    }
    return 0;
}