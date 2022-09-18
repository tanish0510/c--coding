#include<stdio.h>
int main()
{
    int a, b, c;
    b=2;
    c=a%b;
    printf("enter the number");
    scanf("%d", &a);
    if(c==0)
    {
        printf("%d is even", a);
    }
    else 
    {
        printf("false");
    }
    return 0;
}
