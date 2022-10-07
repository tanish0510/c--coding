#include<stdio.h>
int main()
{
    int d1,d2,d3,d4,d5,num,sum;
    printf("enter the five digit number(lesss than 32767)");
    scanf("%d", &num);
    d5=num%10;
    num=num/10;
    d4=num%10;
    num=num/10;
    d3=num%10;
    num=num/10;
    d2=num%10;
    num=num/10;
    d1=num%10;
    num=num/10;
    sum=d1+d2+d3+d4+d5;
    printf("the answer is:%d", sum);
    return 0;
    }