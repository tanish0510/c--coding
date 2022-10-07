#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,n;
    printf("enter the number");
    scanf("%d", &num);
    n=abs(num);
    printf("the absolute value of %d is%d:", num, n);
    return 0;
}