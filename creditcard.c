#include<stdio.h>
int main()
{
    int sum=0, i;
    char num[20];
    
    printf("enter the credit card number:");
    scanf("%s", num);
    for(i=0;i<=15;i++)
{
    
        num[i]-=48;
        if((i%2))
        sum=sum+num[i];
    
    else
    {
        num[i]*=2;
        if(num[i]>10)
        num[i]-=9;
        sum=sum+num[i];
    }
}

    if(sum%10==0)
    
        printf("valid number");


    
   else 
    printf("invalid");


return 0;
}
