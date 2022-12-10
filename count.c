#include<stdio.h>
int main()
{
    int a[25],i,zero=0,pos=0,neg=0,even=0,odd=0;
    printf("enter the numbers of the array:");
    for(i=0;i<25;i++)
    {
        scanf("%d", &a[i]);
    
     if(a[i]==0)
    {
        zero++;
    }
     else if(a[i]>0)
       pos++;
    else 
        neg++;
        if(a[i]==0)
        {

        }
    else if(a[i]%2==0)
       even++;
    
    else
         odd++;
    }
    
    printf("%d are the positive numbers\n", pos);
    printf("%d are the even numbers\n", even);
    printf("%d are the negative numbers\n",neg);
    printf("%d are the null numbers\n",zero);
    printf("%d are the odd numbers\n", odd);
    return 0;
}