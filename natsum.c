#include<stdio.h>
int rsum(int n);
int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    printf("sum=%d",rsum(num));
    return 0;
   
}
int rsum(int n)
{
    if(n!=0)
    return n+ rsum(n-1);
    else
    return n;
}