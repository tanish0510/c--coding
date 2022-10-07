#include<stdio.h>
int main()
{
    int c,d,x,y;
    printf("enter c");
    scanf("%d", &y);
    printf("enter d");
    scanf("%d", &x);
    c=y;
    d=x;
    printf("the original numbers are:%d\t%d\n", c, d);
    printf("now after interchanging\n");
    c=x;
    d=y;
    printf("now the numbers are:%d\t%d\n", c,d);
    return 0;
}