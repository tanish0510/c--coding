#include<stdio.h>
#include<math.h>
int main()
{
    int d1,d2,d3,d4,d5,n;
    printf("enter the  five digit number");
    scanf("%d", &n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    n=n/10;
    long int revnum=d5*10000+d4*1000+d3*100+d2*10+d1;
    if(revnum == n)
    {
    printf("the numbers are equal");
    }
    else
    {
        printf("the reversed number is: %ld"  , revnum);
    }
   return 0;
}