#include<stdio.h>
int main()
{
    int i,num,result;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=100;i++)
    {
    result=i*num;
    printf("%d*%d=%d\n",num,i,result);
    }
    return 0;
}