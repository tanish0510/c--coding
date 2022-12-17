#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int sum=0, *p;
    for(p=&a[0];p<=&a[7];p++)
    sum+=*p;
    printf("sum is %d", sum);
    return 0;
}