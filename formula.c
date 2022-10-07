#include<stdio.h>
int main()
{
    int a, b, c;
    int result;
    printf("enter the first number");
    scanf("%d", &a);
    printf("enter the second number");
    scanf("%d", &b);
    printf("enter the third number");
    scanf("%d", &c);
    result=(a+b)/c;
    printf("result is: (%d+%d)/%d", a ,b,c);
    printf("the result is %d", result);
    return 0;
}